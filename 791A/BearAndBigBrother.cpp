#include<iostream>
using namespace std;

int main(){
    int l,b,n=0;
    cin>>l>>b;
    while(l <= b){
        l *= 3;
        b *= 2;
        n++;
    }

    cout<<n;
    return 0;
}