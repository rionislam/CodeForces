#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long ans = 2;

    if(n%2==1){
        cout<<0<<endl;
    }else{
        for(int i=1; i<n/2; i++){
            ans *= 2;
        }
        cout<<ans<<endl;
    }

    return 0;
}