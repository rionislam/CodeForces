#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--) {
        int n, k;
        cin>>n>>k;
        int m = k-1;
        int l[n], r[n];
        
        for (int i = 0; i < n; ++i) cin>>l[i];
        for (int i = 0; i < n; ++i) cin>>r[i];
        
        int a[n], b[n];
        long long x = 0;
        for(int i=0; i<n; i++){
            a[i] = max(l[i], r[i]);
            b[i] = min(l[i], r[i]);
            x += a[i];
        }

        sort(b, b+n);

        for(int i=0; i<m; i++){
            x += b[n-i-1];
        }

        cout<<x+1<<endl;
    }
    return 0;
}
