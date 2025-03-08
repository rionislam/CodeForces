#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;

    int a[n-1];
    int current = 1;

    for(int i=0; i<(n-1); i++){
        cin>>a[i];
        if(current==t){
            cout<<"YES"<<endl;
            return 0;
        }else if(current>t){
            break;
        }
        if(current==(i+1)){
            current += a[i];
        }
    }

    if(current==t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}