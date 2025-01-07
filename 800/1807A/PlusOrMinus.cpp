#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n]={0};
    int b[n]={0};
    int c[n]={0};

    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]+b[i]==c[i]){
            cout<<'+'<<endl;
        }else if(a[i]-b[i]==c[i]){
            cout<<'-'<<endl;
        }
    }

    return 0;
}