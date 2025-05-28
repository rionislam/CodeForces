#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, q;
        cin>>n>>q;
        int a[n];
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a, a+n);

        int sum[n+1] = {0};

        for(int i=n-1; i>=0; i--){
            sum[n-i] = sum[n-i-1] + a[i];
        }

        for(int i=0; i<q; i++){
            int x;
            cin>>x;

            if(sum[n]< x){
                cout<<-1<<endl;
                continue;
            }else{
                int count = -1;
                int low = 1, high = n;
                while(low <= high){
                    int mid = (low + high) / 2;
                    if(sum[mid] >= x){
                        count = mid;
                        high = mid - 1;
                    }else{
                        low = mid + 1;
                    }
                }

                cout<<count<<endl;
            }
        }
    }


    return 0;
}