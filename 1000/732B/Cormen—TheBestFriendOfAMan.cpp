#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    int a[n];
    int b[n];

    int ans = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i==0){
            b[i] = a[i];
        }else{
            b[i] = max(a[i], k-b[i-1]);
            if(b[i] > a[i]){
                ans += b[i] - a[i];
            }
        }
    }

    cout<<ans<<endl;
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    return 0;
}