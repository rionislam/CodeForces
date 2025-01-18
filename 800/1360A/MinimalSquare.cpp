#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t], b[t];

    for(int i=0; i<t; i++){
        cin>>a[i]>>b[i];
    }

    for(int i=0; i<t; i++){
        int x;
        if(a[i]<b[i]){
            x=a[i]*2;
            if(x<b[i]){
                x=b[i];
            }
        }else{
            x=b[i]*2;
            if(x<a[i]){
                x=a[i];
            }
        }
        cout<<x*x<<endl;
    }

    return 0;
}