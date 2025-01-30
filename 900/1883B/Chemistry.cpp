#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        int count[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
        }

        int odd = 0;
        for (int i = 0; i < 26; i++) {
            if (count[i]>0&&count[i]%2!=0) {
                odd++;
            }
        }

        if (odd <= k + 1) {  
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
