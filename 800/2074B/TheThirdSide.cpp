#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a, a+n);

        if(n==1){
            cout<<a[0]<<endl;
            continue;
        }
        
        for(int i=(n-1); i>0; i--){
            int c = a[i]+a[i-1];
            c--;
            a[i-1] = c;
        }

        cout<<a[0]<<endl;
    }

    return 0;

}
