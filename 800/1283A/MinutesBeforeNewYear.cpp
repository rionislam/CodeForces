#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int h[t], m[t];

    for(int i=0; i<t; i++){
        cin>>h[i]>>m[i];
    } 

    for(int i=0; i<t; i++){
        int ml = (23 - h[i])*60;
        ml += (60-m[i]);
        cout<<ml<<endl;
    }

    return 0;
}