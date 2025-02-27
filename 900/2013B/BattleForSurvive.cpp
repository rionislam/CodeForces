#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        long long a[n];

        for(long long i=0; i<n; i++){
            cin>>a[i];
        }

        if(n>2){
            for(int i=0; i<(n-2); i++){
                a[n-2] -= a[i];
            }

            cout<<a[n-1]-a[n-2]<<endl;
        }else{
            cout<<a[n-1]-a[0]<<endl;
        }
    }

    return 0;