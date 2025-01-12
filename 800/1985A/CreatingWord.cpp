#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string a[t], b[t];

    for(int i=0; i<t; i++){
        cin>>a[i]>>b[i];
    }

    for(int i=0; i<t; i++){
        cout<<string(1, b[i][0])+a[i][1]+a[i][2]<<" "<<string(1, a[i][0])+b[i][1]+b[i][2]<<endl;
    }

    return 0;
}