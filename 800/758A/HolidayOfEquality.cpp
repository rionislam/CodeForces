#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n]={0};
    int biggest = 0;
    int s = 0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(biggest < a[i]){
            biggest = a[i];
        }
    }

    for(int i=0; i<n; i++){
        s += biggest - a[i];
    }

    cout<<s;
    return 0;
}