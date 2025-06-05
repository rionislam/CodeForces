#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        int p = 0;

        while(n>1){
            long long l=0, r=n;
            long long mid = (r+l)/2;
            long long ans = 0;

            while(l < r){
                long long x = ((double)mid/2)*(4+(mid-1)*2);
                x += ((double)mid/2)*(0+(mid-1));

                if(x == n){
                    ans = mid;
                    break;
                }else if(x < n){
                    l = mid + 1;
                    ans = mid;
                }else{
                    r = mid;
                }

                mid = (r+l)/2;
            }

            p++;
            n -= (((double)ans/2)*(4+(ans-1)*2))+(((double)ans/2)*(0+(ans-1)));
        }
        

        cout<<p<<endl;
    }

    return 0;
}