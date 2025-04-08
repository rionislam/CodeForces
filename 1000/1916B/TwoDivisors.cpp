#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a, b;
        cin>>a>>b;

        long long lcm = (a*b)/__gcd(a, b);

        if(lcm==b){
            lcm *= b;
            lcm /= a;
        }

        cout<<lcm<<endl;
    }

    return 0;
}