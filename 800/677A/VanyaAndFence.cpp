#include<iostream>
using namespace std;

int main(){
    int i, h, w=0;
    cin>>i>>h;
    int f[i];
    for(int n = 0; n<i; n++){
        cin>>f[n];
    }

    for(int n = 0; n<i; n++){
        if(f[n]<=h){
            w++;
        }else{
            w +=2;
        }
    }

    cout<<w;
    return 0;

}