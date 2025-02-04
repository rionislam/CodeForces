#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        for(int i=0; i<n; i++){
            if((s[i+2]=='b'||s[i+2]=='c'||s[i+2]=='d')&&(s[i+3]=='b'||s[i+3]=='c'||s[i+3]=='d'||(i+3)>n-1)){
                cout<<s[i]<<s[i+1]<<s[i+2];
                i+=2;
            }else{
                cout<<s[i]<<s[i+1];
                i++;
            }

            if(i>=n-1){
                cout<<"\n";
            }else{
                cout<<'.';
            }
        }
    }

    return 0;
}