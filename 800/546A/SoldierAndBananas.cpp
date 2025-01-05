#include<iostream>
using namespace std;

int main(){
    int k, n, w, p = 0;
    cin>>k>>n>>w;
    for(int i = 1; i <= w; i++){
        p += i*k;
    }
    if(p>n){
        cout<<p-n;
    }else{
        cout<<0;
    }
    
    return 0;
}