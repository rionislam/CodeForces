#include<iostream>
using namespace std;

int main(){
    string test1 = "qwertyuiop";
    string test2 = "asdfghjkl;";
    string test3 = "zxcvbnm,./";
    char s;
    cin>>s;
    string x;
    cin>>x;

    for(int i=0; i<x.length(); i++){
        for(int j=0; j<max(max(test1.length(), test2.length()), test3.length()); j++){
            int n;
            if(s=='R'){
                n=-1;
            }else if(s=='L'){
                n=1;
            }
            if(x[i]==test1[j]){
                x[i]=test1[j+n];
                break;
            }else if(x[i]==test2[j]){
                x[i]=test2[j+n];
                break;
            }else if(x[i]==test3[j]){
                x[i]=test3[j+n];
                break;
            }
        }
    }

    cout<<x<<endl;
    return 0;
}