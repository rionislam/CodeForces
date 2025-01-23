#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string wub="";
    string subS = "";

    for(int i=0; i<s.length(); i++){
        if(i+2<s.length() && (wub==""||wub=="WUB")&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            wub = "WUB";
            i+=2;
            if(subS != ""&&subS[subS.length()-1] != ' '){
                subS += ' ';
            }
        }else{
            wub="";
            subS+=s[i];
            
        }
    }

    if(subS[subS.length()-1] == ' '){
        subS.pop_back();
    }

    cout<<subS;
    return 0;
}