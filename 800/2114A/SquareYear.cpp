#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int s;
        cin>>s;

        int x = sqrt(s);

        if(x*x == s && x > 0){
            cout<<1<<" "<<x-1<<endl;
        }else if(x==0){
            cout<<0<<" "<<0<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}