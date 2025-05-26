#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    while(T--){
        int n;
        string s;
        cin>>s;
        n = s.length();
        string t;
        cin>>t;
        string ans = "";

        int i = 0, j=0;

        while(i < n){
            if(s[i] == t[j] || (s[i] == '?'&& j < t.length())){
                ans += t[j];
                j++;
            }else if(s[i] == '?'){
                ans += 'a';
            } else {
                ans += s[i];
            }

            i++;
        }


        if(j < t.length()){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
    }

    return 0;
}