#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int m[t];
    int c[t];
    int mw=0,cw=0;

    for(int i=0; i<t; i++){
        cin>>m[i]>>c[i];
    }

    for(int i=0; i<t; i++){
        if(m[i]>c[i]){
            mw++;
        }else if(c[i]>m[i]){
            cw++;
        }
    }

    if(mw==cw){
        cout<<"Friendship is magic!^^";
    }else if(mw>cw){
        cout<<"Mishka";
    }else{
        cout<<"Chris";
    }

    return 0;
}