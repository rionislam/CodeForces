#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a, b, x, y, n;
        cin>>a>>b>>x>>y>>n;

        long long a1 = a, b1 = b;
        long long n1 = n;

        if(a1-x <= n1){
            n1 -= (a1 - x);
            a1 = x;
        } else {
            a1 -= n1;
            n1 = 0;
        }


        if(b1-y <= n1){
            n1 -= (b1 - y);
            b1 = y;
        } else {
            b1 -= n1;
            n1 = 0;
        }

        long long a2 = a, b2 = b;
        long long n2 = n;

        if(b2-y <= n2){
            n2 -= (b2 - y);
            b2 = y;
        } else {
            b2 -= n2;
            n2 = 0;
        }

        if(a2-x <= n2){
            n2 -= (a2 - x);
            a2 = x;
        } else {
            a2 -= n2;
            n2 = 0;
        }

        cout<<min(a1*b1, a2*b2)<<endl;
    }

    return 0;
}