#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int a[n];

        if(n==2){
            cout<<"2 1"<<endl;
            continue;
        }

        for(int i=0; i<n; i++){
            if(k%2==0){
                if(i==n-2){
                    a[i] = n;
                 }else{
                     a[i]= n-1;
                 }
            }else{
                if(i==n-1){
                    a[i] = n-1;
                 }else{
                     a[i]= n;
                 }
            }

            cout<<a[i]<<" ";
        }

        cout<<endl;


    }
    
    return 0;
}