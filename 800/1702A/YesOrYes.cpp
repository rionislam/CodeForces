#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i = 0; i<n; i++){
        cin>>s[i];
    }

    for(int i = 0; i<n; i++){
        if((s[i][0]=='Y'||s[i][0]=='y')&&(s[i][1]=='E' || s[i][1]=='e')&&(s[i][2]=='S'||s[i][2]=='s')){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}