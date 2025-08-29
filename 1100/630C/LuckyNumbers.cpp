#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long ans = 2;
    for(int i=0; i<n; i++){
        ans *= 2;
    }

    ans -= 2;

    cout<<ans<<endl;
    return 0;
}