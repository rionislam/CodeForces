#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool h=false;
    bool e=false;
    bool l1=false;
    bool l2=false;
    bool o=false;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='h'&&!h){
            h = true;
        }else if(h&&s[i]=='e'&&!e){
            e = true;
        }else if(e&&s[i]=='l'&&!l1){
            l1 = true;
        }else if(l1&&s[i]=='l'&&!l2){
            l2 = true;
        }else if(l2&&s[i]=='o'&&!o){
            o = true;
        }
    }

    if(h&&e&&l1&&l2&&o){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}