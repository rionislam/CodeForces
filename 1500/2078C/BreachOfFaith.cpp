#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long b[2*n];
        long long b1[n];
        long long b2[n+1];
        long long s = 0;

        for(int i=0; i<2*n; i++){
            cin>>b[i];
        }

        sort(b, b+2*n);
        
        for(int i=0; i<(n-1); i++){
            b1[i]=b[i+1];
            b2[i]=b[i+n];
            s += b2[i]-b1[i];
        }

        b2[n-1]=b[0];
        b2[n]=b[2*n-1];

        b1[n-1] = s+b2[n-1]+b2[n];
        

        for(int i = 0; i<n; i++){
            cout<<b2[i]<<" "<<b1[i]<<" ";
        }

        cout<<b2[n]<<endl;

    }

    return 0;
}