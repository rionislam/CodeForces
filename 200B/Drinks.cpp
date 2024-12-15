#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s += x;
    }

    double a = (double)s/n;
    cout<<setprecision(12)<<a;
    return 0;
    
}