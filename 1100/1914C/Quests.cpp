#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        int b[n+1] = {0};

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            b[i+1] = max(b[i], x);
        }

        int ans = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            if((k-(i+1)) < 0){
                break;
            }
            sum += a[i];
            ans = max(sum + (b[i+1]*(k-(i+1))), ans);
        }

        cout<<ans<<endl;
    }

    return 0;
}