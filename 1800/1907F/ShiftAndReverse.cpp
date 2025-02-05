#include <iostream>
#include <algorithm>
using namespace std;

long long solve(int reverse_operation,long long a[], int n) {
    int count = 0;
    int dismatch_index = -1;

    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            if (count > 0) {
                return (long long)(1e9);
            }
            ++count;
            dismatch_index = i + 1;
        }
    }

    if (a[n - 1] > a[0]) {
        if (count > 0) {
            return (long long)(1e9);
        }
    }

    return min(n - dismatch_index + reverse_operation, dismatch_index + 2 - reverse_operation);
}

bool sorted(long long arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}

void reverseArray(long long arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        swap(arr[i], arr[size - i - 1]);
    }
}


int main() {
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (sorted(a, n)) {
            cout << 0 << endl;
            continue;
        }

        long long ans = solve(0,a,n);

        reverseArray(a, n);

        if (sorted(a, n)) {
            cout << 1 << endl;
            continue;
        }

        ans = min(ans, solve(1,a,n));

        if (ans == (long long)(1e9)) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
        }
    return 0;
}
