#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n = s.length();
 
        if (n == 0) {
            cout<<"NO"<<endl;
            continue;
        }
 
        bool possible = false;
        int opening = 0;
        int closing = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                opening++;
            }else{
                closing++;
            }
            if(opening == closing && opening != 0 && i!= n-1) {
                possible = true;
                break;
            }
        }
 
        if(possible) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}