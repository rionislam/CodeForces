#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int result;
        cin>>result;

        for(int i=1; i<n; i++){
            int x;
            cin>>x;
            result &= x;
        }

        cout<<result<<endl;
    }

    return 0;
}