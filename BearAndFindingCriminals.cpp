#include<iostream>
using namespace std;

int main(){
    int n, a;
    cin>>n>>a;

    int t[n];

    for(int i=0; i<n; i++){
        cin>>t[i];
    }
    
    int ans;

    if(t[a-1] == 1){
        ans = 1;
    }else{
        ans = 0;
    }

    for(int i=1; i<=max(n-a, a-1); i++){
        if(a-i-1 >= 0 && a+i-1 < n){
            if(t[a-i-1] == 1 && t[a+i-1] == 1){
                ans += 2;
            }
        }else if(a-i-1 >= 0 && t[a-i-1] == 1){
            ans++;
        }else if(a+i-1 < n && t[a+i-1] == 1){
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}