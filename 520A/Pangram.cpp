#include<iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    if(n>=26){
        int count[26]={0};
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                count[s[i]-'A']++;
            }else{
                count[s[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(count[i]==0){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}