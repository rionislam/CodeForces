#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

       
        if (n == 1) {
            cout << "NO" << endl;
            continue;
        }

        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());

        
        if (s < rev_s) {
            cout << "YES" << endl;
            continue;
        }

        if(k==0){
            cout<<"NO"<<endl;
            continue;
        }

        bool exists = false;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] > s[n - 1 - i]) {
                char temp = s[n-1-i];
                s[n-1-i] = s[i];
                s[i] = temp;
                exists = true;
                break;
            }else if(s[i] == s[n - 1 - i]){
                for(int j=i+1; j<(n-1-i); j++){
                  if(s[i]<s[j]){
                    char temp = s[j];
                    s[j] = s[i];
                    s[i] = temp;
                    exists = true;
                    break;
                  }else if(s[i]>s[j]){
                    char temp = s[j];
                    s[j] = s[i];
                    s[n-1-i] = temp;
                    exists = true;
                    break;
                  }
                }
            }

            if(exists){
                break;
            }
        }

        if(exists){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
