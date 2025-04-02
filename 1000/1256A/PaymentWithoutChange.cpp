#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b, n, s;
        cin>>a>>b>>n>>s;

        int needNCoins = s/n;

        if(needNCoins<=a && s%n<=b){
            cout<<"YES"<<endl;
            continue;
        }

        if(needNCoins>a && s-(a*n)<=b){
            cout<<"YES"<<endl;
            continue;
        }


        cout<<"NO"<<endl;
    }

    return 0;
}