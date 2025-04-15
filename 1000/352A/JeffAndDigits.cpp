#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int five = 0;
    int zero = 0;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;

        if(x==5){
            five++;
        }else if(x==0){
            zero++;
        }
    }

    if(zero == 0){
        cout<<-1<<endl;
    }else if(five == 0){
        cout<<0<<endl;
    }else{
        if(five>=9){
            for(int i=0; i<9*(five/9); i++){
                cout<<5;
            }
        
            for(int i=0; i<zero; i++){
                cout<<0;
            }
            
            cout<<endl;
        }else{
            cout<<0<<endl;
        }
    }

    return 0;
}