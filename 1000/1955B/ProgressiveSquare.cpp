#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, c, d;
        cin>>n>>c>>d;

        int a[n*n];

        for(int i=0; i<n*n; i++){
            cin>>a[i];
        }

        sort(a, a+n*n);

        int ans[n*n] = {0};
        ans[0] = a[0];

        for(int i=1; i<n*n; i++){
            if(i%n==0){
                ans[i] = ans[i-n]+d;
                continue;
            }
            ans[i] = ans[i-1]+c;
        }

        sort(ans, ans+n*n);

        bool exists = true;

        for(int i=0; i<n*n; i++){
            if(a[i]!=ans[i]){
                exists = false;
                break;
            }
        }

        if(exists){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}