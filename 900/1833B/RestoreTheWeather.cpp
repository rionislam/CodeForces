/*
Steps~
1. Taking a pair array a 
2. Storing the value on the first part of a 
3. Storing the index on the second part of a
4. Sort a and b
5. Sort the b again using the original indexes of a
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        pair<int, int> a[n];
        int b[n], ans[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + n);

        for (int i = 0; i < n; i++) {
            ans[a[i].second] = b[i]; 
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
