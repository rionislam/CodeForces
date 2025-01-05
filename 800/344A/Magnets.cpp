#include <iostream>
using namespace std;

int main() {
    int n, l = -1, g = 0;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        if (x != l) {
            g++;      
            l = x;   
        }
    }

    cout << g; 
    return 0;
}
