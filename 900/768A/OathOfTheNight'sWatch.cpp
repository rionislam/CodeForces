#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int count = 0;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);

    for(int i=1; i<n-1; i++){
        if(a[i]!=a[0]&&a[i]!=a[n-1]){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}