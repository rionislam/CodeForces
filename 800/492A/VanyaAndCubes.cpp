#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int h=0, x=0, y=0;

    for(int i=1; i<=n; i++){
        x+=i;
        y+=x;
        if(y>n){
            break;
        }
        h++;
    }

    cout<<h;
    return 0;
}