#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(i==0){
            cout<<abs(a[0]-a[1])<<" "<<abs(a[0]-a[n-1])<<endl;
        }else if(i==(n-1)){
            cout<<abs(a[i-1]-a[i])<<" "<<abs(a[0]-a[n-1])<<endl;
        }else{
            if(abs(a[i]-a[i+1])<abs(a[i-1]-a[i])){
                cout<<abs(a[i]-a[i+1])<<" ";
            }else{
                cout<<abs(a[i-1]-a[i])<<" ";
            }

            if(abs(a[0]-a[i])>abs(a[i]-a[n-1])){
                cout<<abs(a[0]-a[i])<<endl;
            }else{
                cout<<abs(a[i]-a[n-1])<<endl;
            }
        }
    }

    return 0;
}