#include<iostream>
using namespace std;

int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int count[26]={0};

    for(int i=0; i<s.length(); i++){
        count[s[i]-'a']++;
    }

    string ans = "";
    bool exists = true;

    for(int i=0; i<26; i++){
        if(count[i]!=0&&count[i]%k==0){
            for(int j=0; j<count[i]/k; j++){
                ans += char('a'+i);
            }
        }else if(count[i]!=0&&count[i]%k!=0){
            exists = false;
            break;
        }
        
    }

    if(exists){
        for(int i=0; i<k; i++){
            cout<<ans;
        }
    }else{
        cout<<-1;
    }
    

    cout<<endl;
    return 0;
}