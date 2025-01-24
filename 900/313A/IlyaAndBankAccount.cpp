#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<0){
        int a = n%10;
        int b = (n/10)%10;
        if(a<b){
            cout<<n/10;
        }else{
            cout<<((n/10)/10)*10+a;
        }
    }else{
        cout<<n;
    }

    return 0;
}