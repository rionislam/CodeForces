#include<iostream>
using namespace std;

int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){
        int sum, biggest;
        cin>>a>>b>>c;
        if(a>=b&&a>=c){
            biggest = a;
            sum = b+c;
        }else if(b>=a&&b>=c){
            biggest = b;
            sum = a+c;
        }else{
            biggest = c;
            sum = a+b;
        }

        if(sum==biggest){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}