#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int o=0, z=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='1'){
                o++;
            }else if(s[i]=='0'){
                z++;
            }
        }

        if(min(z,o)%2==1){
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
    }

    return 0;
}