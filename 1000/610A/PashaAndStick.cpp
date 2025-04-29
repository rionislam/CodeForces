#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;

    if(n%2 == 0){
        int x = 1;
        int y = (n-x*2)/2;
        while(x < y){
            ans++;
            x++;
            y = (n-x*2)/2;
        }
    }
   
    cout<<ans<<endl;
    
    return 0;
}