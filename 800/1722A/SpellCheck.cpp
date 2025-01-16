#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n[t];
    string s[t];
    for(int i=0; i<t; i++){
        cin>>n[i];
        cin>>s[i];
    }

    for(int i=0; i<t; i++){
        if(n[i] == 5){
            int x[5] = {0};
            for(int j=0; j<5; j++){
                if(s[i][j]=='T'){
                    x[0]++;
                }else if(s[i][j]=='i'){
                    x[1]++;
                }else if(s[i][j]=='m'){
                    x[2]++;
                }else if(s[i][j]=='u'){
                    x[3]++;
                }else if(s[i][j]=='r'){
                    x[4]++;
                }
            }
            if(x[0]==1&&x[1]==1&&x[2]==1&&x[3]==1&&x[4]==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}