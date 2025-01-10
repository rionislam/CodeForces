#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int number[n];

    for(int i=0; i<n; i++){
        cin>>number[i];
    }

    for(int i=0; i<n; i++){
        int sum = (number[i]%10)+((number[i]/10)%10);
        cout<<sum<<endl; 
    }

    return 0;
}