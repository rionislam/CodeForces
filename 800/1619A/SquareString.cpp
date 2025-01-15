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
        if(s[i].length()%2 == 0){
            int l = s[i].length()/2;
            bool sq = true;
            for(int j=0; j<l; j++){
                if(s[i][j]!=s[i][j+l]){
                    sq = false;
                    break;
                }
            }
            if(sq){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}