#include<iostream>
using namespace std;

int main(){
    int v, p;
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            cin>>v;
            if(v==1){
                p = abs(3-i)+abs(3-j);
            }
            
        }
    }
    cout<<p;

    return 0;
}