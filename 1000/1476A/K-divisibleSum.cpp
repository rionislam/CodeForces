#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, k;
        cin>>n>>k;
        if(n==k){
            cout<<1<<endl;
            continue;
        }else if(n>k){
            if(n%k==0){
                cout<<1<<endl;
            }else if(n%k!=0){
                cout<<2<<endl;
            }
        }else{
            long long ans = k/n;

            if(k%n)
                ans++;
            
            cout<<ans<<endl;
        }
        
    }

    return 0;
}