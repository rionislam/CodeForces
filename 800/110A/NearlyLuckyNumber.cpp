#include <iostream>
using namespace std;

int main() {
    string x;
    cin >> x;

    int s, f, o;
    s = f = o = 0;

    for (int i = 0; i < x.length(); i++) {
        char n = x[i];
        if (n == '4') {
            f++;
        } else if (n == '7') {
            s++;
        } else {
            o++;
        }
    }

    int luckyCount = s + f;
    bool isLucky = true;

    if (luckyCount == 0) {
        isLucky = false;
    } else {
        int temp = luckyCount;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            temp /= 10;
        }
    }

    if (isLucky) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}