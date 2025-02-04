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
        int cost = 0;
        int longest = 0;
        char lastChar = '\0';
        for(int i=0; i<n; i++){
            if(s[i]==lastChar){
                longest++;
            }else{
                if(longest>cost){
                    cost=longest;
                }
                longest = 1;
                lastChar = s[i];
            }
        }
        if(longest>cost){
            cost=longest;
        }

        cout<<cost+1<<endl;
    }

    return 0;
}