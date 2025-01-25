#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int earning = 0;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);

    for(int i=0; i<m; i++){
        if(a[i]<0){
            earning+=a[i];
        }
    }

    earning *= -1;
    cout<<earning;

    return 0;
}