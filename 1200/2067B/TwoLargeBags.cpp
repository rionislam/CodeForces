#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a, a+n);
        int mx = 0;
        for(int i=0; i<n; i+=2){
            if (max(mx, a[i]) != max(mx, a[i + 1])) {
                cout<<"No"<<endl;
                return;
            }
            mx = max(mx, a[i]) + 1;
        }

         cout<<"Yes"<<endl;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }

    return 0;
}