#include<iostream>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;

    if(k<=(n/2)+(n%2)){
        cout<<1+(k-1)*2<<endl;
    }else{
        cout<<2+((k-((n/2)+(n%2)))-1)*2<<endl;
    }

    return 0;
}
