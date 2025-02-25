#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m, k;
        cin>>n>>m>>k;

        if(m==1)
            cout<<"NO"<<endl;
        else if(((n+m-1)/m)+k<n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}