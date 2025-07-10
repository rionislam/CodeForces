#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int a[n];

        for(int i=0; i<n; i++) cin>>a[i];

        sort(a, a+n);

        long long ans = 0;
        for(int i=(n-1); i>=0; i -= 2){
            ans += a[i];
            if(i-1 >= 0){
                ans -= a[i-1];

                if(ans >= k){
                    ans -= k;
                    k = 0;
                }else{
                    k -= ans;
                    ans = 0;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}