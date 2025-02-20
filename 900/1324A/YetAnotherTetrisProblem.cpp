#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        int biggest = -1;
        bool possible = true;

        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>biggest){
                biggest=a[i];
            }
        }

        for(int i=0; i<n; i++){
            if((biggest-a[i])%2==1){
                possible = false;
                break;
            }
        }

        if(possible){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}