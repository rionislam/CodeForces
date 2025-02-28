#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int b[n];

    for(int i=0; i<n; i++)
        cin>>b[i];

    int x=0;

    for(int i=0; i<n; i++){
        int a = b[i]+x;

        cout<<a<<" ";

        x = max(x, a);
    }

    cout<<endl;

    return 0;
}