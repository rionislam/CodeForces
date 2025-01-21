#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    char l='0';
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(l==s[i]){
            count++;
        }else{
            count = 1;
            l = s[i];
        }

        if(count==7){
            break;
        }
    }

    if(count==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}