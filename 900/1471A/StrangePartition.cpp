#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,x;
        cin>>n>>x;
        long long a[n]={0};
        long long b[2]={0};
        long long totalSum = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            totalSum+=a[i];
            b[1] += (a[i] + x - 1) / x;
        }

        b[0]=(totalSum+x-1)/x;



        cout<<b[0]<<" "<<b[1]<<endl;
    }

    return 0;
}