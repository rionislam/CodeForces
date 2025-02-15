#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];

    int negCount = 0, zeroCount = 0;
    long long cost = 0;

    for (int i=0; i<n; i++) {
        cin>>a[i];

        if (a[i]>0) {
            cost += (a[i] - 1);
        }else if (a[i] < 0) {
            cost += (-1 - a[i]);
            negCount++;
        }else{
            cost++;
            zeroCount++;
        }
    }

    if (negCount%2 == 1) {
        if (zeroCount == 0) {
            cost += 2;
        }
    }

    cout<<cost<<endl;
    return 0;
}
