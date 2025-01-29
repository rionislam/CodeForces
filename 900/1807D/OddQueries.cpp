#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, q;
        cin>>n>>q;
        int a[n];
        int sum[n+1]={0};
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum[i+1] = sum[i]+a[i];
        }
        while(q--){
            int l, r, k;
            cin>>l>>r>>k;
            int rangeSum = sum[r]-sum[l-1];
            int sum2 = sum[n]-rangeSum+k*(r-l+1);

            if(sum2%2!=0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}