#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t]={0}, b[t]={0}, n[t]={0};

    for(int i=0; i<t; i++){
        cin>>a[i]>>b[i]>>n[i];
    }

    for(int i=0; i<t; i++){
        int k = (n[i]-(n[i]%a[i]))+b[i];
        if(k>n[i]){
            k = k-a[i];
        }
        cout<<k<<endl;
    }

    return 0;
}