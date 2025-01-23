#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int count=0;
    int lCount=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++){
        if(a[i+1]>=a[i]){
            count++;
        }else{
            count=0;
        }

        if(count>lCount){
            lCount=count;
        }
    }

    cout<<lCount+1;
    return 0;
}