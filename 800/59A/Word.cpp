#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l, u;
    l=u=0;
    for(int i = 0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            l++;
        }else{
            u++;
        }
    }

    if(l>u || l == u){
        for(int i = 0; i<s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }else{
        for(int i = 0; i<s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }

    cout<<s;
    return 0;
}