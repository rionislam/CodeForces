#include<iostream>
using namespace std;

int main(){
    int n, r=0;
    cin>>n;
    int classes[7] = {0};
    while(n--){
        int x;
        cin>>x;
        for(int i = 0; i < 7; i++){
            int digit = x%10;
            if(digit == 1){
                classes[i]++;
            }
            x/=10;
        }
    }

    for(int i = 0; i<7; i++){
        if(classes[i]>r){
            r=classes[i];
        }
    }

    cout<<r;

    return 0;
}