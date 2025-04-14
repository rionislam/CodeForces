#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a = 600;
        cout<<a<<" ";
        for(int i=0; i<(n-1); i++){
            int x;
            cin>>x;
            a+=x;
            cout<<a<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}