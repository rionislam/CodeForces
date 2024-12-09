#include<iostream>
using namespace std;

int main(){
    int a,n;
    cin>>a;
    n = a / 5;
    if(a%5 != 0){
        n++;
    }
    cout<<n;
    return 0;
}