#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool zero = false;

        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==0){
                zero = true;
            }
        }

        if(!zero){
            cout<<"YES"<<endl;
            continue;
        }

        bool lying = false;
        for(int i=0; i<(n-1); i++){
            if(a[i]==0 && a[i+1]==0){
                lying = true;
                break;
            }
        }

        if(lying){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}