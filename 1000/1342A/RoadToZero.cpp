#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long x, y;
        cin>>x>>y;
        long long a, b;
        cin>>a>>b;

        b = min(a+a, b);

        if(x<y){
            int temp = x;
            x=y;
            y=temp;
        }

        cout<<y*b+(x-y)*a<<endl;
    }

    return 0;
}