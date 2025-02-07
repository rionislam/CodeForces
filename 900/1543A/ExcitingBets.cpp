#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a, b;
        cin>>a>>b;
        long long g;
        long long m;
        if(a==b){
            g=0;
            m=0;
        }else{
            g = abs(a-b);
            m = min(a%g, g-a%g);
        }
        
        cout<<g<<" "<<m<<endl;
    }

    return 0;
}