#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);

    if(n%2==0){
        cout<<n/2-1<<endl;
        for(int i=0; i<n/2; i++){
            cout<<a[i+n/2]<<" "<<a[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<n/2<<endl;
        for(int i=0; i<n/2; i++){
            cout<<a[i+n/2]<<" "<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;
    }

    return 0;
}