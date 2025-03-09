#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int total=a, newCandle = a/b, remaining = a%b;
    while(newCandle){
        total+=newCandle;
        int temp = (newCandle+remaining)%b;
        newCandle = (newCandle+remaining)/b;
        remaining = temp;
        
    }

    cout<<total<<endl;

    return 0;
}