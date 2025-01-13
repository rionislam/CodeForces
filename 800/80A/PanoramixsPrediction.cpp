#include<iostream>
using namespace std;

bool isPrime(int x){
    if(x>2){
        for(int i=2; i<=x/2; i++){
            if(x%i == 0){
                return false;
            }
        }
    }

    return true;
    
}

int main(){
    int a, b;
    cin>>a>>b;
    int x=a;

    while(x<b){
        x++;
        if(isPrime(x)){
            if(x == b){
                cout<<"YES";
                return 0;
            }
            break;
        }
    }

    cout<<"NO";
    return 0;

}