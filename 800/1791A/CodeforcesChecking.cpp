#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    char c[t];
    string cf = "codeforces";

    for(int i=0; i<t; i++){
        cin>>c[i];
    }

    for(int i=0; i<t; i++){
        bool exist = false;
        for(int j=0; j<cf.length(); j++){
            if(cf[j] == c[i]){
                exist = true;
                break;
            }
        }
       if(exist){
        cout<<"YES"<<endl;
       }else{
        cout<<"NO"<<endl;
       }
    }

    return 0;
}