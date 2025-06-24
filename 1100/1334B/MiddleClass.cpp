#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin>>n>>x;

        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
    
        sort(a, a+n);

        long long sum = 0;

        int ans = 0;
        for(int i=n-1; i>=0; i--){
            sum += a[i];
            if((sum/(ans+1))>=x){
                ans++;
            }else{
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}