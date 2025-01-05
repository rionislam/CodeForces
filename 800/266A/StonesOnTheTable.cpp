#include<iostream>
using namespace std;

int main(){
    int x, n=0;
    cin>>x;
    string s;
    cin>>s;
    char p;
    for(int i = 0; i<x; i++){
        if(p==s[i]){
            n++;
        }
        p = s[i];
    }
    cout<<n;
    return 0;
}