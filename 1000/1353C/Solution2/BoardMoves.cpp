#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        if(n==2){
            cout<<3<<endl;
        }

        long long ans = 0;

        long long k = n/2;

        ans = ((k*(k+1)*(2*k+1))/6);
        ans *= 8;

        cout<<ans<<endl;
    }

    return 0;
}