#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string x;
    cin>>x;
    int o=0, z=0;

    for(int i=0; i<n; i++){
        if(x[i]=='1'){
            o++;
        }else if(x[i]=='0'){
            z++;
        }
    }

    if(o>z){
        cout<<o-z<<endl;
    }else{
        cout<<z-o<<endl;
    }

    return 0;
}