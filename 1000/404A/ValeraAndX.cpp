#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s[n];

    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    char d = s[0][0];
    char o = s[0][1];

    bool formsX = true;

    if(d != o){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j|| i+j==n-1){
                    if(s[i][j] != d){
                        formsX = false;
                        break;
                    }
                }else{
                    if(s[i][j] != o){
                        formsX = false;
                        break;
                    }
                }
            }
        }
    }else{
        formsX = false;
    }
    

    if(formsX){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }   

    return 0;
}