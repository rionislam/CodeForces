#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int p[26]={0};
        int b=0;
        for(int i=0; i<n; i++){
            if(p[s[i]-'A'] == 0){
                b += 2;
            }else{
                b++;
            }
            p[s[i]-'A']++;
        }
        cout<<b<<endl;
    }

    return 0;
}