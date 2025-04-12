#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, a, b;
        cin>>n>>a>>b;

        string x;
        cin>>x;

        int m = 1;
        char l = x[0];
        for(int i=1; i<x.length(); i++){
            if(x[i]!=l){
                m++;
                l=x[i];
            }
        }

        cout<<a*n+max(b*n, b*(m/2+1))<<endl;
    }

    return 0;
}