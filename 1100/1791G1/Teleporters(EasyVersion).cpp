#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, c;
        cin>>n>>c;

        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];

            a[i] += i+1;
        }

        sort(a, a+n);

        int ans = 0;
        for(int i=0; i<n; i++){
            if(a[i] <= c){
                ans++;
                c -= a[i];
            }else{
                break;
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}