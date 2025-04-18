#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%4==0 && sqrt(n/4) == (int)sqrt(n/4)){
            cout<<"YES"<<endl;
        }else if(n%2==0 && sqrt(n/2) == (int)sqrt(n/2)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}