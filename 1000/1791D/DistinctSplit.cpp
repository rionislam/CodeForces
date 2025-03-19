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
        int c1[26] = {0};
        int c2[26] = {0};
        int prefix_count[n+1] = {0};
        int suffix_count[n+1] = {0};

        for(int i=0; i<n; i++){
            if(c1[s[i]-'a']==0){
                prefix_count[i+1] = prefix_count[i]+1;
            }else{
                prefix_count[i+1] = prefix_count[i];
            }
            c1[s[i]-'a']++;

            if(c2[s[n-i-1]-'a']==0){
                suffix_count[i+1] = suffix_count[i]+1;
            }else{
                suffix_count[i+1] = suffix_count[i];
            }
            c2[s[n-i-1]-'a']++;
        }
        int most = 0;
        for(int i=0; i<n; i++){
            if((prefix_count[i+1]+suffix_count[n-i])>most){
                most = prefix_count[i+1]+suffix_count[n-i-1];
            }
        }

        cout<<most<<endl;
    }

    return 0;
}