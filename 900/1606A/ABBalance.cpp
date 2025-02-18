#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int ab = 0;
        int ba = 0;

        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='a'&&s[i+1]=='b'){
                ab++;
            }else if(s[i]=='b'&&s[i+1]=='a'){
                ba++;
            }
        }

        if(ab>ba&&s[s.length()-1]=='b'){
            s[s.length()-1] = 'a';
            ab--;
        }else if(ba>ab&&s[0]=='b'){
            s[0] = 'a';
            ba--;
        }

        if(ab==ba){
            cout<<s<<endl;
        }
    }

    return 0;
}