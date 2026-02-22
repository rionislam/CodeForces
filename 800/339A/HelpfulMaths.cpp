#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int one=0, two=0, three=0;
    for(int i=0; i<s.length(); i+=2){
        if(s[i]=='1') one++;
        else if(s[i]=='2') two++;
        else three++;
    }

    for(int i=0; i<s.length(); i+=2){
        if(one>0){
            cout<<"1";
            one--;
        }
        else if(two>0){
            cout<<"2";
            two--;
        }
        else{
            cout<<"3";
            three--;
        }

        if(i!=s.length()-1) cout<<"+";
    }   

    return 0;
}