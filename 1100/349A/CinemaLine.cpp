#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int twentyFive = 0;
    int fifty = 0;

    bool possible = true;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x == 25){
            twentyFive++;
        }else if(x == 50){
            if(twentyFive > 0){
                twentyFive--;
                fifty++;
            }else{
                possible = false;
            }
        }else if(x == 100){
            if(fifty > 0 && twentyFive > 0){
                fifty--;
                twentyFive--;
            }else if(twentyFive >= 3){
                twentyFive -= 3;
            }else{
                possible = false;
            }
        }
    }

    if(possible){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}