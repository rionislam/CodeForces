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

    if(min%2!=0){
        cout<<"Akshat"<<endl;
    }else{
        cout<<"Malvika"<<endl;
    }

    return 0;
}