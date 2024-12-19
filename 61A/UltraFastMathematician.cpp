#include<iostream>
using namespace std;

int main(){
    string x,y,a="";
    cin>>x>>y;

    for(int i = 0; i<x.length(); i++){
        if(x[i] == y[i]){
            a += "0";
        }else{
            a += "1";
        }
    }

    cout<<a;
}