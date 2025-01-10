#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n]={0}, b[n]={0}, c[n]={0};

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]!=b[i] && a[i]!=c[i]){
            cout<<a[i]<<endl;
        }else if(b[i]!=a[i] && b[i]!=c[i]){
            cout<<b[i]<<endl;
        }else{
            cout<<c[i]<<endl;
        }
    }

    return 0;
}