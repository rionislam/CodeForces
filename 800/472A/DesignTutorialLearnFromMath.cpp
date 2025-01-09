#include<iostream>
using namespace std;

bool isComposite(int number){
    if(number<=1){
        return false;
    }

    for(int i = 2; i<number/2; i++){
        if(number%i == 0){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int x = (n-n%2)/2;
    int y = n-x;


    while(isComposite(x) == false || isComposite(y) == false){
        x--;
        y++;
    }

    cout<<x<<' '<<y;
    return 0;
}