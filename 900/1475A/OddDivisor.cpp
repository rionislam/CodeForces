#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        bool hasOddDevisor = false;
        if(n%2!=0){
            hasOddDevisor=true;
        }else{
            while(n%2==0){
                n /= 2;
            }

            if(n>1){
                hasOddDevisor = true;
            }else{
                hasOddDevisor = false;
            }
        }
        if(hasOddDevisor){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}