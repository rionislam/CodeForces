#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long k;
        cin>>k;

        if(k%3==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}