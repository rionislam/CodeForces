#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;

        if (2 * b == a + c) {
            cout << "YES" << endl;
            continue;
        }

        if ((2 * b - c) > 0 && (2 * b - c) % a == 0) {
            cout << "YES" << endl;
            continue;
        }

        if ((a + c) % 2 == 0 && ((a + c) / 2) % b == 0) {
            cout << "YES" << endl;
            continue;
        }

        if ((2 * b - a) > 0 && (2 * b - a) % c == 0) {
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }

    return 0;
}
