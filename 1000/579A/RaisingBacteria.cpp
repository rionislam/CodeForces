#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int count = 0;

    while(x!=0){
        int i=1;
        while(i<=x){
            i*=2;
        }
        x-=i/2;
        count++;
    }

    cout<<count<<endl;

    return 0;
}