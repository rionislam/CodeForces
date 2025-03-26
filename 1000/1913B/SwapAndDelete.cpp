#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int zeros = 0;
        int ones = 0;

        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                zeros++;
            }else{
                ones++;
            }
        }

        for(int i=0; i<n; i++){
            if(s[i]=='0'&&ones>0){
                ones--;
            }else if(s[i]=='1'&&zeros>0){
                zeros--;
            }else{
                break;
            }
        }

        cout<<zeros+ones<<endl;
    }

    return 0;
}