#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n[t]={0};
    string s[t];

    for(int i=0; i<t; i++){
        cin>>n[i];
        cin>>s[i];
    }

    for(int i=0; i<t; i++){
        int x[26]={0};
        bool notSuspicious = true;
        for(int j=0; j<n[i]; j++){
            if(s[i][j]!=s[i][j-1]&&x[(int)s[i][j]-'A']!=0){
                notSuspicious = false;
                break;
            }else{
                x[s[i][j]-'A']++;
            }
        }
        if(notSuspicious){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}