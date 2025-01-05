#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isEasy = true;
    while(n--){
        int x;
        cin>>x;
        if(x==1){
            isEasy = false;
            break;
        }
    }

    if(isEasy){
        cout<<"EASY";
    }else{
        cout<<"HARD";
    }
    
    return 0;
}