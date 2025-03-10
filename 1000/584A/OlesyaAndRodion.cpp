#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;

    if(t==10 && n==1){
        cout<<-1<<endl;
        return 0;
    }

    for(int i=0; i<n; i++){
        if(t<10){
            cout<<t;
        }else{
            if(i==(n-1)){
                cout<<0;
            }else{
                cout<<1;
            }
        }
        
    }

    cout<<endl;

    return 0;
}