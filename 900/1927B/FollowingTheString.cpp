#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int letters[26]={0};
        string s="";
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            for(int j=0; j<26; j++){
                if(letters[j]==a){
                    s += char('a'+j);
                    letters[j]++;
                    break;
                }
            }
        }

        cout<<s<<endl;
    }

    return 0;
}