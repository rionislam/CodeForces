#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        long long s = n*(n+1)/2;

        long long pow2 = 1;
        while(pow2<=n){
            s -= pow2*2;
            pow2 = pow2*2;
        }

        cout<<s<<endl;
    }

    return 0;
}