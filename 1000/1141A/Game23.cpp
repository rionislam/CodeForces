#include<iostream>
using namespace std;

int main(){
    long long n, m;
    cin>>n>>m;
    long long count = 0;

    if(n==m){
        cout<<0<<endl;
        return 0;
    }

    if(m%n!=0){
        cout<<-1<<endl;
        return 0;
    }

    long long d = m/n;

    while(d>1){
        if(d%2==0){
            d /= 2;
        }else if(d%3==0){
            d /= 3;
        }else{
            break;
        }
        count++;
    }

    if(d==1){
        cout<<count<<endl;
    }else{
        cout<<-1<<endl;
    }

    return 0;
}