#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin>>s;

        string ans = "";
        int skipLow = 0, skipUp = 0;

        for (int i = s.length() - 1; i >= 0; --i) {
            char c = s[i];

            if (c == 'b') {
                skipLow++;
            } else if (c == 'B') {
                skipUp++;
            } else if (islower(c)) {
                if (skipLow > 0) skipLow--;
                else ans += c;
            } else if (isupper(c)) {
                if (skipUp > 0) skipUp--;
                else ans += c;
            }
        }

        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }

    return 0;
}
