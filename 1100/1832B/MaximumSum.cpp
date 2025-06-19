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
        long long prefixSum[n+1] = {0};
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a, a+n);

        for(int i=0; i<n; i++) prefixSum[i+1] = prefixSum[i] + a[i];

        long long sum = 0;

        for(int i=0; i<=k; i++) sum = max(sum, prefixSum[(n-(k-i))] - prefixSum[i*2]);


        cout<<sum<<endl;
    }

    return 0;
}