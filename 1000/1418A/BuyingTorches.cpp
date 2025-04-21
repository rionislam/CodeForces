#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long x, y, k;
        cin>>x>>y>>k;

        long long ans = k;
        
        ans += (k*y+k-1)/(x-1);

        if((k*y+k-1)%(x-1)!=0){
            ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}