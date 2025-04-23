#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a, a+n);

        int ans = 1;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(a[i]<=ans){
                ans++;
                cnt = 0;
            }else{
                cnt++;
                if(ans+cnt-1>=a[i]){
                    ans += cnt;
                    cnt = 0;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}