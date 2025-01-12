#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s[t];
    for(int i=0; i<t; i++){
        cin>>s[i];
    }

    for(int i=0; i<t; i++){
        string swaped = "";
        if(s[i]=="abc"){
            cout<<"YES"<<endl;
        }else{
            swaped = string(1, s[i][1])+s[i][0]+s[i][2];
            if(swaped == "abc"){
                cout<<"YES"<<endl;
            }else{
                swaped = string(1,s[i][0])+s[i][2]+s[i][1];
                if(swaped == "abc"){
                    cout<<"YES"<<endl;
                }else{
                    swaped = string(1,s[i][2])+s[i][1]+s[i][0];
                    if(swaped == "abc"){
                        cout<<"YES"<<endl;
                    }else{
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
    }

    return 0;
}