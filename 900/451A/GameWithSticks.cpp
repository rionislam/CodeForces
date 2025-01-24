#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int min;

    if(n<m){
        min=n;
    }else{
        min=m;
    }

    if(n*m%2!=0 || n==1|| m==1){
        cout<<"Akshat"<<endl;
    }else{
        cout<<"Malvika"<<endl;
    }

    return 0;
}