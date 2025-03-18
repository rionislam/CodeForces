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

        for(long long i=1; i<=n/2; i++){
            ans += i*i*8;
        }

        cout<<ans<<endl;
    }

    return 0;
}