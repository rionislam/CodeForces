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
        int sum = (s[i][0]-'0')+(s[i][2]-'0');
        cout<<sum<<endl;
    }

    return 0;
}