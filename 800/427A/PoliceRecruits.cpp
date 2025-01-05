#include<iostream>
using namespace std;

int main(){
    int n, p=0, c=0;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==-1){
         if(p==0){
            c++;
         }else{
            p--;
         }
        }else{
            p+=x;
        }
    }

    cout<<c;
    return 0;
}