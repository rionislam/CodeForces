#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int c;
        int two, one;
        cin>>c;
        two = (c/3)+((c%3)/2);
        one = (c/3)+((c%3)%2);
        cout<<one<<" "<<two<<endl;
    }

    return 0;
}