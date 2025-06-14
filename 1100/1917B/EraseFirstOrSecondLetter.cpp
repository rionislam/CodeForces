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

        int ans = 0;
        int count[26] = {0};
        int distinctChar = 0;

        for(int i=0; i<n; i++){
            if(count[s[i]-'a'] == 0){
                distinctChar++;
            }
            ans += distinctChar;
            count[s[i]-'a']++;
        }

        cout<<ans<<endl;
    }

    return 0;
}