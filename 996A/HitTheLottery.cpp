#include<iostream>
using namespace std;

int main(){
    int n, a=0;
    cin>>n;
    while(n){
        if(n>=100){
            a+=n/100;
            n=n%100;
        }else if(n>=20){
            a += n/20;
            n=n%20;
        }else if(n >=10){
            a += n/10;
            n=n%10;
        }else if(n>=5){
            a += n/5;
            n=n%5;
        }else{
            a += n;
            n=0;
        }
    }
    cout<<a;

    return 0;
}