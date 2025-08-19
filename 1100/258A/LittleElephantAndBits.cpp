#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;

    bool foundZero = false;
    for(int i=0; i<n.length(); i++){
        if(!foundZero && i == n.length()-1){
            continue;
        }

        if(foundZero || n[i] == '1'){
            cout<<n[i];
            continue;
        }

        if(n[i] == '0'){
            foundZero = true;
        }
    }

    return 0;
}