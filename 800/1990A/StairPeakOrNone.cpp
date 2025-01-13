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
        if(b[i]>a[i] && c[i]>b[i]){
            cout<<"STAIR"<<endl;
        }else if(b[i]>a[i] && b[i]>c[i]){
            cout<<"PEAK"<<endl;
        }else{
            cout<<"NONE"<<endl;
        }
    }

    return 0;
}