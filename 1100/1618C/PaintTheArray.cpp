#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long a[n];

        long long oddGcd = 0;
        long long evenGcd = 0;

        for(int i = 0; i<n; i++){
            cin>>a[i];
            if(i % 2 == 1) {
                evenGcd = __gcd(evenGcd, a[i]);
            } else {
                oddGcd = __gcd(oddGcd, a[i]);
            }
        }

        long long ans = 0;

        bool odd = true;
        bool even = true;

        for(int i = 0; i<n; i++){
            if(a[i]%evenGcd == 0){
                even = false;
            }
            i++;
        }

        for(int i=1; i<n; i++){
            if(a[i]%oddGcd == 0){
                odd = false;
            }
            i++;
        }

        if(even && odd){
            ans = max(evenGcd, oddGcd);
        } else if(even) {
            ans = evenGcd;
        } else if(odd) {
            ans = oddGcd;
        }



        cout<<ans<<endl;
    }

    return 0;
}