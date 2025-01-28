#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    bool isMagicNumber = true;

    for(int i=0; i<n.length(); i++){
        if((i+2)<n.length() && n[i]=='1' && n[i+1]=='4' && n[i+2]=='4'){
            i+=2;
        }else if((i+1)<n.length() && n[i]=='1' && n[i+1]=='4'){
            i+=1;
        }else if(n[i]=='1'){
        }else{
            isMagicNumber = false;
            break;
        }
    }

    if(isMagicNumber){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}