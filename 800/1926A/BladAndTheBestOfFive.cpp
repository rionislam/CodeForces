#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s[t];

    for(int i=0; i<t; i++){
        cin>>s[i];
        int a = 0, b = 0;
        for(int j=0; j<5; j++){
            if(s[i][j] == 'A'){
                a++;
            }else{
                b++;
            }
        }

        if(a>b){
            cout<<'A'<<endl;
        }else{
            cout<<'B'<<endl;
        }
    }

    return 0;
}