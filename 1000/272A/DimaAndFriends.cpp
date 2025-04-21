#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        sum += x;
    }

    int ans = 0;

    for(int i=1; i<=5; i++){
        if((sum+i)%(n+1)!=1){
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}