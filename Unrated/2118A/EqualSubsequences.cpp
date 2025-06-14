#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        string s = "";

        for(int i=0; i<k; i++){
            s += '1';
        }

        for(int i=0; i<(n-k); i++){
            s += '0';
        }

        cout<<s<<endl;
    }

    return 0;
}