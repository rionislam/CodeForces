#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(a%b==0){
            n[i]=0;
        }else{
            n[i]=b-(a%b);
        }
    }
    for(int i=0;i<t;i++){
        cout<<n[i]<<endl;
    }    
    return 0;
}