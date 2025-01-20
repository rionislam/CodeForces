#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    cout<<n/2<<endl;

    for(int i=0; i<n/2; i++){
        if(i!=n/2-1){
            cout<<2<<" ";
        }else{
            if(n%2==0){
                cout<<2<<endl;
            }else{
                cout<<3<<endl;
            }
        }
    }

    return 0;
}