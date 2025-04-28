#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, k, b, s;
        cin>>n>>k>>b>>s;
        long long a[n] = {0};

        if(s < b * k || s > b * k + (k - 1) * n){
            cout<<-1<<endl;
            continue;
        }

        long long sum = k*b;
        a[0] = sum;
        for(int i=0; i<n; i++){
            int x = min(k - 1, s - sum);
            sum += x;
            a[i] += x;
        }
        
        if(sum < s){
            cout<<-1<<endl;
            continue;
        }else{
            for(int i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}