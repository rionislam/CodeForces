#include<iostream>
using namespace std;

long long getR(long long a){
    while(a%2==0){
        a /= 2;
    }

    return a;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a, b;
        cin>>a>>b;

        if(a>b){
            long long temp = a;
            a = b;
            b = temp;
        }

        long long r = getR(a);

        if(getR(b)!=r){
            cout<<-1<<endl;
            continue;
        }

        b /= a;
        int ans = 0;

        while(b>=8){
            b /= 8;
            ans++;
        }

        if(b>1){
            ans++;
        }

        cout<<ans<<endl;
    }

    return 0;
}