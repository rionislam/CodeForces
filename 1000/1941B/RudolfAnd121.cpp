#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        bool canExist = true;
        for(int i=1; i<n-1; i++){
            if(a[i-1]<=a[i]/2&&a[i-1]<=a[i+1]){
                a[i] -= a[i-1]*2;
                a[i+1] -= a[i-1];
                a[i-1]=0;
            }else{
                canExist = false;
                break;
            }
        }

        if(canExist&&a[n-3]==0&&a[n-2]==0&&a[n-1]==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}