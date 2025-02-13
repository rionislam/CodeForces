#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        if(n==k){
            cout<<0<<endl;
        }else if(k<n){
            cout<<(n-k)%2<<endl; 
        }else if(n<k){
            cout<<k-n<<endl;
        }

    }

    return 0;
}