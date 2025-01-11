#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s[n];

    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    for(int i=0; i<n; i++){
        char last;
        string subs = "";
        subs+= s[i][0];
        for(int j=1; j<s[i].length(); j+=2){
                subs += s[i][j];
        }
        cout<<subs<<endl;
    }

    return 0;
}