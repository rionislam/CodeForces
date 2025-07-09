#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++) cin>>a[i];

        long long ans = 0;
        for(int d=1; d<=n; d++){
            if(n % d == 0){
                long long maximum = 0, minimum = 1e18;
                for(int i=0; i<n; i += d){
                    long long sum = 0;
                    for(int j=i; j<(i+d); j++){
                        sum += a[j];
                    }
                    maximum = max(maximum, sum);
                    minimum = min(minimum, sum);
                }
                ans = max(ans, maximum - minimum);
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}