#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, a, b;
        cin>>n>>a>>b;

        if(a+b+2<=n){
            cout<<"Yes"<<endl;
        }else if(a==b && a==n){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}