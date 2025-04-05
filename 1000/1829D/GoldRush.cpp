#include<iostream>
using namespace std;

bool exists(int n, int m) {
	if (n == m) {return true;}
	else if (n % 3 != 0) {return false;}
	else {return (exists(n / 3, m) || exists(2 * n / 3, m));}
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;


        if(exists(n, m)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}