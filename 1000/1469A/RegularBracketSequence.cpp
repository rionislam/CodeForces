#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int opening = 0;
        int closing = 0;
        bool possible = true;
        char last = s[0];
        for(char c:s){
            if(c=='('){
                opening++;
            }else if(c==')'){
                if(opening>closing){
                    closing++;
                }else{
                    if(last=='?'){
                        opening++;
                    }else{
                        possible = false;
                        break;
                    }
                }
            }else if(c=='?'){
                if(opening>closing){
                    closing++;
                }else{
                    opening++;
                }
                last = '?';
            }
        }

        if(possible && opening==closing){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}