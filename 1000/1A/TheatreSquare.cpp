#include<iostream>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    long long h = 0;
    long long v = 0;

    h += n/k;

    if(n%k!=0){
        h++;
    }

    v += m/k;

    if(m%k!=0){
        v++;
    }

    cout<<h*v<<endl;

    return 0;
}