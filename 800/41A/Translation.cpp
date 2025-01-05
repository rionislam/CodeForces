#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    bool x = true;
    if(s1.length() == s2.length()){
        for(int i = 0; i<s1.length(); i++){
            if(s1[i] == s2[s1.length()-(1+i)]){
                continue;
            }else{
                x=false;
                break;
            }
        }
    }else{
        x = false;
    }
    

    if(x){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
    
}