#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long a[n];
        long long sum = 0;
        int ones = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1) ones++;
            sum += a[i];
        }

        if(sum < ones + n || n==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}