#include<iostream>
using namespace std;

int main(){
    int k, r;
    cin>>k>>r;
    int remeinder =1, n=0;

    while(remeinder){
        remeinder = (k*(n+1)%10)-r;
        n++;
        if(remeinder == -r){
            break;
        }
    }

    cout<<n;
    return 0;
}