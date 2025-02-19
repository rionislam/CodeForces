#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a[6]={0};
        cin>>a[0]>>a[1]>>a[2];
        long long m = 0;

        if(a[0]==a[1]&&a[1]==a[2]){
            cout<<"YES"<<endl;
            continue;
        }
        
        sort(a, a+6);
        m=a[3];
        
        long long x = a[5]/2;
        if(m<x){
            x=m;
        }
        long long y = a[5]-x;
        a[5] = y;
        a[0] = x;
        if(a[0]==a[3]&&
            a[3]==a[4]&&
            a[4]==a[5]){
            cout<<"YES"<<endl;
            continue;
        }

        sort(a, a+6);
        
        x = a[5]/2;
        if(m<x){
            x=m;
        }
        y = a[5]-x;

        a[5] = y;
        a[0] = x;
        if(a[0]==a[2]&&
            a[2]==a[3]&&
            a[3]==a[4]&&
            a[4]==a[5]){
            cout<<"YES"<<endl;
            continue;
        }

        sort(a, a+6);
        
        x = a[5]/2;
        y = a[5]-x;

        a[5] = y;
        a[0] = x;
        if(a[0]==a[1]&&
            a[1]==a[2]&&
            a[2]==a[3]&&
            a[3]==a[4]&&
            a[4]==a[5]){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }

    return 0;
}