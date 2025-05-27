#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x, y, k;
        cin>>x>>y>>k;

        int jumpsX = ceil((x+k-1) / k);
        int jumpsY = ceil((y+k-1) / k);

        if(jumpsX > jumpsY){
            cout<<(jumpsX * 2) - 1<<endl;
        }else{
            cout<<jumpsY * 2<<endl;
        }
    }

    return 0;
}