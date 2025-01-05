#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    string numbers[t];
    for (int i = 0; i < t; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < t; i++) {
        string number = numbers[i];
        string results[10000];
        int n = 0;

        for (int j = 0; j < number.length(); j++) {
            if (number[j] != '0') {
                results[n] = number[j];
                for (int k = j + 1; k < number.length(); k++) {
                    results[n] += '0';
                }
                n++;
            }
        }

        
        cout << n << endl;

        
        for (int j = 0; j < n; j++) {
            if (j != n - 1) {
                cout << results[j] << ' ';
            } else {
                cout << results[j] << endl;
            }
        }
    }

    return 0;
}
