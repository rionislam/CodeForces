#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cout<<2<<endl;

        int a = n-1;
        int b = n;
        for(int i=1; i<n; i++){
            cout<<b<<" "<<a<<endl;
            if((a+b)%2==0){
                b = (a+b)/2;
            }else{
                b = (a+b)/2+1;
            }
            a--;
        }
    }

    return 0;
}