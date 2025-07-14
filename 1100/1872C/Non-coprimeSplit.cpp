#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int l, r;
        cin>>l>>r;

        bool notFound = true;

        for(int i=l; i<=r; i++){
            int minDivisor = 1;
            for(int j=2; j*j<=i; j++){
                if(i % j == 0){
                    minDivisor = j;
                    break;
                }
            }

            if(minDivisor > 1){
                cout<<minDivisor<<" "<<i-minDivisor<<endl;
                notFound = false;
                break;
            }
        }

        if(notFound){
            cout<<-1<<endl;
        }
    
    }
}