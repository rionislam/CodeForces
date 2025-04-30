#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a = 2;
        int b = n-3;

        while(__gcd(a, b) != 1){
            a++;
            b--;
        }

        cout<<a<<" "<<b<<" "<<1<<endl;
    }
    
    return 0;
}