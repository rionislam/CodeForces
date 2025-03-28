#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int d;
        cin>>d;

        int x = 1+d;

        while(!isPrime(x)){
            x++;
        }

        int y = x+d;
        
        while(!isPrime(y)){
            y++;
        }

        cout<<x*y<<endl;
    }

    return 0;
}