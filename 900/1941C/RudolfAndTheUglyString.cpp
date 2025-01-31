#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int deleted = 0;

        for (int i = 0; i < n - 2; i++) {
            if ((s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') ||
                (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')) {
                if (s[i + 1] != '#') { 
                    s[i + 1] = '#';
                    deleted++;
                }
                i += 2;
            }
        }

        cout << deleted << endl;
    }

    return 0;
}
