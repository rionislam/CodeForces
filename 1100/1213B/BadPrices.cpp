#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int m = 1e9;
        int count = 0;

        for(int i=(n-1); i>=0; i--){
            if(a[i]>m){
                count++;
            }

            m = min(a[i], m);
        }

        cout<<count<<endl;
    }

    return 0;
}