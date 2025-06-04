#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, c;
        cin>>n>>c;

        long long s[n];
        for(int i = 0; i < n; i++) cin>>s[i];

        long long min = 0, max = 1e9;
        long long mid = (max+min) / 2;

        while(min < max){
            long long sum = 0;
            for(int i = 0; i < n; i++){
                sum += (s[i]+2*mid)*(s[i]+2*mid);
                if(sum > c) break;
            }

            if(sum < c){
                min = mid + 1;
            }else if(sum > c){
                max = mid - 1;
            }else{
                break;
            }
            mid = (max + min) / 2;
        }

        cout<<mid<<endl;
    }

    return 0;
}