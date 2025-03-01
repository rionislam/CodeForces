#include<iostream>
#include<cmath>
using namespace std;

bool isPerfectSquare(long long num) {
    long long root = static_cast<long long>(sqrt(num));
    return root * root == num;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int p[n];
        long long prefixSum = 0;
        long long totalSum = 0;

        for (int i = 0; i < n; i++) {
            p[i] = n - i;
            totalSum += p[i];
        }

        if (isPerfectSquare(totalSum)) {
            cout << -1 << endl;
            continue;
        }

        bool isValid = true;
        for (int i = 0; i < n; i++) {
            if (isPerfectSquare(prefixSum + p[i])) {
                bool swapped = false;
                for (int j = i + 1; j < n; j++) {
                    if (!isPerfectSquare(prefixSum + p[j])) {
                        swap(p[i], p[j]);
                        swapped = true;
                        break;
                    }
                }
                if (!swapped) {
                    isValid = false;
                    break;
                }
            }

            prefixSum += p[i];
            cout << p[i] << " ";
        }

        if (!isValid) {
            cout << -1 << endl;
        } else {
            cout << endl;
        }
    }

    return 0;
}
