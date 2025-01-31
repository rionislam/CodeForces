#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x, n, m;
        cin>>x>>n>>m;
        while(x>0){
            if(x>20&&n){
                x=(x/2)+10;
                n--;
            }else if(m){
                x-=10;
                m--;
            }else{
                break;
            }
        }
        if(x<=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}