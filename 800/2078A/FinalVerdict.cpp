#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin>>n>>x;
        
        int a[n];
        long long sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin>>a[i];
            sum += a[i];
        }
        
        if (sum == n*x) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}