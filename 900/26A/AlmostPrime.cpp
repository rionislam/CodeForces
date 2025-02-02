#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

int main(){
    int n;
    cin>>n;
    int count1 = 0;

    for(int i=6; i<=n; i++){
        int count2 = 0;
        for(int j=i/2; j>1; j--){
            if(i%j==0&&isPrime(j)){
                count2++;
                if(count2>2){
                    break;
                }
            }
        }
        if(count2==2){
            count1++;
        }
    }

    cout<<count1<<endl;

    return 0;

}
