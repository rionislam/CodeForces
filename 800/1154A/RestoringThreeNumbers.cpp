#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, e,f,g;
    cin>>d>>e>>f>>g;
    if(d>e&&d>f&&d>g){
        c = d-e;
        b = f-c;
        a = e-b;
    }else if(e>d&&e>f&&e>g){
        c=e-d;
        a=f-c;
        b=d-a;
    }else if(f>e&&f>d&&f>g){
        c=f-d;
        a=e-c;
        b=d-a;
    }else{
        c=g-d;
        b=f-c;
        a=e-c;
    }

    cout<<a<<' '<<b<<' '<<c;
    return 0;
}