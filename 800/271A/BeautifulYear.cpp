#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    while (true) {
        year++;
        int y = year;
        int digits[10] = {0};
        bool isBeautiful = true;

        while (y > 0) {
            int digit = y % 10;
            if (digits[digit] > 0) {
                isBeautiful = false;
                break;
            }
            digits[digit]++;
            y /= 10;
        }
        
        if (isBeautiful) {
            cout << year << endl;
            break;
        }
    }

    return 0;
}
