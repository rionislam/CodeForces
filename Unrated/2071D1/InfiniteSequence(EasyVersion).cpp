#include<iostream>
using namespace std;

const int MAX_N = 2e5 + 5;

long long n, p[MAX_N];

long long ans(long long m) {
    if (m <= n + 1) {
        return p[m];
    }

    bool nodd = (n % 2 == 0);
    bool modd = (m % 2 == 1);

    if (nodd && modd) {
        return ans((m - 1) / 2 + 1) ^ p[n / 2 + 1] ^ p[n + 1];
    } 
    else if (nodd) {
        return p[n / 2 + 1] ^ p[n + 1];
    } 
    else if (modd) {
        return ans((m - 1) / 2 + 1) ^ p[n + 1];
    } 
    else {
        return p[n + 1];
    }
}


int main() {
    long long t;
    cin>>t;
    while (t--) {
        long long l, r;
        cin>>n>>l>>r;

        long long a[MAX_N];
        for (long long i = 1; i <= n; i++) {
            cin>>a[i];
        }

        p[1] = 0;
        for (long long i = 1; i <= n; i++) {
            p[i + 1] = p[i] ^ a[i];
        }

        cout<<(ans(l + 1) ^ ans(l))<<endl;
    }
    
    return 0;
}
