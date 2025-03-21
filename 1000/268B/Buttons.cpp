#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;
    int k = 1;

    while(k<=n){
        ans += (n-k)*k;
        k++;
    }
    ans += n;
    cout<<ans<<endl;
    return 0;
}