#include<iostream>
#include<cmath>
using namespace std;

bool isLucky(int x){
    int k = x%10;
    while(x){
        if(k!=4&&k!=7){
            return false;
        }
        x /= 10;
        k = x%10;
    }

    return true;
}

int main(){
    int n;
    cin>>n;
    if(isLucky(n)){
        cout<<"YES"<<endl;
    }else{
        for(int i=4; i<=n/2; i++){
            if(n%i==0 && isLucky(i)){
                cout<<"YES"<<endl;
                return 0;
            }
        }

        cout<<"NO"<<endl;
    }

    return 0;
}