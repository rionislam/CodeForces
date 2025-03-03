#include<iostream>
using namespace std;

int solve(){
    int n;
    cin>>n;
    for (int i = 0; i <= 9; i++) {
        string s = to_string(n - i);
        int md = 0;
        for (int j=0; j<s.length(); j++) {
            if (s[j] <= '7') {
                md = max(md, s[j] - '0');
            }
        }
        if (i >= 7 - md) {
            cout<<i<<endl;
            return 0;
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}