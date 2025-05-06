#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, k;
        cin>>n>>k;

        if(k*k > n){
            cout<<"NO"<<endl;
            continue;
        }

        if(k%2 != n%2){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
    }

    return 0;
}