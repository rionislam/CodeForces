#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int k=2;
        int x = 0;
        for(k=2; ; k++){
            int y = (pow(2, k)-1);
            if(n%y==0){
                x = n/y;
                break;
            }
        }
        
        cout<<x<<endl;
    }

    return 0;
}