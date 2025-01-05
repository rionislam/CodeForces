#include<iostream>
using namespace std;

int main(){
    int n,l,e,p=0, mp=0;
    cin>>n;
    while(n--){
        cin>>l>>e;
        p = (p-l)+e;
        if(p>mp){
            mp = p;
        }
    }

    cout<<mp;
    return 0;
}