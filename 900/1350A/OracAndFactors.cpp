#include<iostream>
#include<cmath>
using namespace std;

int smallestDevisor(int n){
    long long d=0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            d=i;
            break;
        }
    }

    if(d==0){
        d=n;
    }

    return d;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, k;
        cin>>n>>k;

        cout<<smallestDevisor(n)<<endl;
        if(n%2==0){
            n += 2*k;
        }else{
            n+=2*(k-1)+smallestDevisor(n);
        }

        cout<<n<<endl;
    }

    return 0;
}