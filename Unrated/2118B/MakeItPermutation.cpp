#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cout<<2*n-2<<endl;

        for(int i=2; i<=n; i++){
            cout<<i<<" "<<1<<" "<<i<<endl;
        }

        for (int i = 1; i < n; ++i) {
            cout<<i<<" "<<i+1<<" "<<n<<endl;
        }
    }

    return 0;
}