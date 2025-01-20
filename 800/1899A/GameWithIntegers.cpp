#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n[t];

    for(int i=0; i<t; i++){
        cin>>n[i];
    }

    for(int i=0; i<t; i++){
        if((n[i]-1)%3==0||(n[i]+1)%3==0){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }

    return 0;
}