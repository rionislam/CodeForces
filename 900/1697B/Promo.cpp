#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    long long p[n], s[n+1];
    
    for(int i=0; i<n; i++){
        cin>>p[i];
    }

    sort(p, p+n);

    for(int i=0; i<n; i++){
        s[i+1]=s[i]+p[i];
    }
    while(q--){
        int x, y;
        cin>>x>>y;
        cout<<s[n-(x-y)]-s[n-x]<<endl;
    }

    return 0;
}