#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t]={0}, b[t]={0}, c[t]={0};

    for(int i=0; i<t; i++){
        cin>>a[i]>>b[i]>>c[i];
    }

    for(int i=0; i<t; i++){
        if((a[i]>b[i] && a[i]<c[i])||(a[i]<b[i] && a[i]>c[i])){
            cout<<a[i]<<endl;
        }else if((b[i]>a[i] && b[i]<c[i])||(b[i]<a[i] && b[i]>c[i])){
            cout<<b[i]<<endl;
        }else{
            cout<<c[i]<<endl;
        }
    }

    return 0;
}