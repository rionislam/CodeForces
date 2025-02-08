#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int longest = 0;
        int current = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                current++;
                longest = max(longest, current);
            } else {
                break;
            }
        }

        cout << longest << endl;
    }

    return 0;
}
