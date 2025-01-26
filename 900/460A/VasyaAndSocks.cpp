#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int y = n;

    if (n >= m) {
        int x = n;
        while (y >= m) {
            int newSocks = y / m;
            x += newSocks;
            y = y % m + newSocks;
        }
        cout << x << endl;
    } else {
        cout << n << endl;
    }

    return 0;
}
