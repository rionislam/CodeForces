#include<iostream>
#include<cmath>
using namespace std;

bool isPerfectCube(long long x){
    long long cubeRoot = round(cbrt(x));
    return (cubeRoot * cubeRoot * cubeRoot) == x;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long x;
        cin>>x;
        bool found = false;
        for(long long i=1; i<cbrt(x); i++){
            if(isPerfectCube(x - i*i*i)){
                found = true;
                break;
            }
        }

        if(found){
            cout<<"YES"<<endl;
        }else{  
            cout<<"NO"<<endl;
        }
    }

    return 0;
}