#include <iostream>
using namespace std;

void solve() {
    
}

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        int count0 = 0;
        int count1 = 0;
        for (char c : s) {
            if (c == '0') {
                count0++;
            } else {
                count1++;
            }
        }

        
        int totalPairs = n / 2;
        int reqBadPairs = totalPairs - k;

        int zerosForBad = reqBadPairs;
        int onesForBad = reqBadPairs;

        int remainingZeros = count0 - zerosForBad;
        int remainingZeros = count1 - onesForBad;

        
        if (remainingZeros >= 0 &&
            remainingZeros >= 0 &&
            remainingZeros % 2 == 0 &&
            remainingZeros % 2 == 0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}