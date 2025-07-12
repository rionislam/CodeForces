#include<iostream>
using namespace std;

int binaryDecimals[31];

bool ok(int n){
    if(n == 1) return true;
    bool ans = false;
    for(int i=0; i<31; i++){
        if(n%binaryDecimals[i] == 0){
            ans |= ok(n/binaryDecimals[i]);
        }
    }

    return ans;
}

int main(){

    int j = 0;
    for (int i = 2; i <= 100000; i++) {
		int curr = i;
		bool bad = false;
		while (curr) {
			if (curr % 10 > 1) {bad = true; break;}
			curr /= 10;
		}
        
		if (!bad) {
            binaryDecimals[j] = i;
            j++;
        }
	}

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(ok(n)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

    return 0;

}