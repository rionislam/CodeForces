#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; 
        int x[n];
        
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        if (x[0] != x[1] && x[0] != x[2]) {
            cout << 1 << endl; // First element is unique
        } else if (x[1] != x[0] && x[1] != x[2]) {
            cout << 2 << endl; // Second element is unique
        } else {
            // Check the rest of the array
            for (int i = 2; i < n; i++) {
                if (x[i] != x[i - 1] && x[i] != x[i - 2]) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
