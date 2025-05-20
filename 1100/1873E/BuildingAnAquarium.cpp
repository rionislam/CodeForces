#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, x;
        cin>>n>>x;
        int a[n];

        int maxA = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>maxA){
                maxA = a[i];
            }
        }

        long long wForMaxA = 0;
        for(int i=0; i<n; i++){
            wForMaxA += maxA - a[i];
        }

        long long lo = 0, hi = 2000000000;
        if(wForMaxA > x){
            hi = maxA;
        }else{
            lo = maxA;
        }
        
        while(lo < hi){
            long long mid = lo + (hi - lo + 1) / 2;
            long long wForMid = 0;
            for(int i=0; i<n; i++){
                wForMid += max(0LL, mid - a[i]);
            }

            if(wForMid <= x){
                lo = mid;
            }else{
                hi = mid - 1;
            }
        }

        cout<<lo<<endl;
    }

    return 0;
}