#include<iostream>
#include<limits>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, f, a, b;
        cin>>n>>f>>a>>b;

        long long totalChargeNeeded=0;
        long long lastOne = 0;
        for(int i=0; i<n; i++){
            long long m;
            cin>>m;
            long long diff = m-lastOne;
            lastOne = m;
            totalChargeNeeded += min(b, diff*a);
        }
        if(totalChargeNeeded<f){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}