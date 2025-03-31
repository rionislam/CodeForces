#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
 
 
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
    
 
        int secNeeded = 0;        
        for(int i=0; i<n; i++){
            if(s[i]==c){
                for(int j=i+1; j<n*2; j++){
                    if(s[j%n]=='g'){
                        secNeeded = max(j-i, secNeeded);
                        i = j-1;
                        break;
                    }
                }
            }
        }
 
        cout<<secNeeded<<endl;
    }
 
    return 0;
}