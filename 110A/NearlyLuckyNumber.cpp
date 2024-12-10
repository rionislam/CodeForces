#include<iostream>
using namespace std;

int main(){
    string x;
    cin>>x;
    int s, f, o;
    s=f=o=0;
    for(int i = 0; i<x.length(); i++){
        char n = x[i];
        if(n == '4'){
            f++;
        }else if(n == '7'){
            s++;
        }else{
            o++;
        }
    }
    if(o==0 && s>0 && f>0){
        cout<<"YES";
    }else if(s+f == 4 || s+f == 7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}