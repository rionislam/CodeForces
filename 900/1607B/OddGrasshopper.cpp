#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long x0, n;
        cin>>x0>>n;

        long long x = x0;

        if(n%4==1){
            if(x%2==0){
                x -= n;
            }else{
                x += n;
            }
            
        }else if(n%4==2){
            if(x%2==0){
                x += 1;
            }else{
                x -= 1;
            }
        }else if(n%4==3){
            if(x%2==0){
                x += n+1;
            }else{
                x -= n+1;
            }
        }else if(n%4==0){
            x = x;
        }
        cout<<x<<endl;
    }

    return 0;
}