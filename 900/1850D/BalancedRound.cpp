#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a, a+n);
        int total=0, count=1;
        for(int i=0; i<n-1; i++){
            if(abs(a[i]-a[i+1])<=k){
                count++;
            }else{
                total = max(count, total);
                count = 1;
            }
        }
        total = max(total, count);

        cout<<n-total<<endl;
    }

    return 0;
}