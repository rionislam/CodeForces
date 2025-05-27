#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int a[n];

        for(int i = 0; i < n; ++i) {
            cin>>a[i];
        }

        int arrays = 1;
        int last = a[0];

        for(int i = 1; i < n; ++i) {
            if (last + 1 < a[i]) {
                arrays++;
                last = a[i];
            }
        }

        cout<<arrays<<endl;
    }

    return 0;
}