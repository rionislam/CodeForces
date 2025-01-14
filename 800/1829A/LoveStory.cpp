#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s[t];
    string c="codeforces";

    for(int i=0; i<t; i++){
        cin>>s[i];
    }

    for(int i=0; i<t; i++){
        int x=0;
        for(int j=0; j<c.length(); j++){
            if(c[j]!=s[i][j]){
                x++;
            }
        }
        cout<<x<<endl;
    }

    return 0;
}