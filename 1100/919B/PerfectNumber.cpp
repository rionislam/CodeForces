#include<iostream>
using namespace std;

int main(){
    int k;
    cin>>k;

    int num = 0;

    while(k){
        num++;
        int sum = 0;

        int ans = num;
        while(ans){
            sum += ans % 10;
            ans /= 10;
        }

        if(sum==10) k--;
    }

    cout<<num<<endl;
    
    return 0;
}