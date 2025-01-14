#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t]={0}, b[t]={0};

    for(int i=0; i<t; i++){
        cin>>a[i]>>b[i];
    }

    for(int i=0; i<t; i++){
        int c = b[i];
        int x = (c-a[i])+(b[i]-c);
        while(c--){
            int y = (c-a[i])+(b[i]-c);
            if(y<x){
                x=y;
            }else{
                break;
            }
        }
        cout<<x<<endl;
    }

    return 0;
}