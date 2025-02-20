#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int k=0;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            k = __gcd(k, abs(x-(i+1)));
        }

        cout<<k<<endl;
    }

    return 0;
}