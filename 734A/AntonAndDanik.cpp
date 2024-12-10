#include<iostream>
using namespace std;

int main(){
    int n, a, d;
    string s;
    cin>>n;
    cin>>s;
    a=d=0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'A'){
            a++;
        }else{
            d++;
        }
    }

    if(a>d){
        cout<<"Anton";
    }else if(a==d){
        cout<<"Friendship";
    }else{
        cout<<"Danik";
    }

    return 0;
}