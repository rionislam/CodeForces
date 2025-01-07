#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string s2 = "";
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='.' || (s2 == "-"&&s[i]=='-')){
            s2 += s[i];
            if(s2 == "."){
                cout<<0;
            }else if(s2 == "-."){
                cout<<1;
            }else if(s2 == "--"){
                cout<<2;
            }
            s2 = "";
        }else{
            s2 += s[i];
        }
    }

    return 0;
}