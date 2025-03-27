#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k, q;
        cin>>n>>k>>q;
        int ans = 0;

        int l = 0;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x<=q){
                l++;
            }else{
                if(l>=k){
                    ans += (l*1LL*(l+1))/2 - ((k-1)*l - ((k-2)*(k-1))/2);
                }
                l=0;
            }
        }
        if(l>=k)
            ans += (l*1LL*(l+1))/2 - ((k-1)*l - ((k-2)*(k-1))/2);

        cout<<ans<<endl;
    }

    return 0;
}