#include<iostream>
using namespace std;

int main(){
    string p;
    cin>>p;
    bool willOutput = false;
    string s = "HQ9";

    for(int i=0; i<3; i++){
        if(willOutput){
            break;
        }
        for(int j=0; j<p.length(); j++){
            if(s[i]==p[j]){
                willOutput = true;
                break;
            }
        }
    }

    if(willOutput){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}