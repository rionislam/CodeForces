#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;
        string s = "";

        if(x<=45){
            for(int i=9; i>0; i--){
                if(x-i>0){
                    x-=i;
                    s+=char('0'+i);
                }else if(x-i==0){
                    x-=i;
                    s+=char('0'+i);
                    break;
                }
            }
            string s2="";
            for(int i=s.length()-1; i>=0; i--){
                s2+=s[i];
            }
            cout<<s2<<endl;
        }else{
            cout<<-1<<endl;
        }

    }

    return 0;
}