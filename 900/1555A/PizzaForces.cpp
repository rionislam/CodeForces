#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        long long time = n * 2 + (n + 1) / 2;

        if(time%10>5&&time%5>=10-(time%10)){
            time += 10-(time%10);
        }else if(time%10>5&&time%5<10-(time%10)){
            time -= time%5;
        }else if(time%10<5&&time%10>=5-time%10){
            time += 5-time%10;
        }else if(time%10<5&&time%10<5-time%10){
            time -= time%10;
        }
        
        if(time<15){
            time = 15;
        }

        cout<<time<<endl;
    }
}