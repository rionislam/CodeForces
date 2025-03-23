#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p[7];
    int total = 0;

    for(int i=0; i<7; i++){
        cin>>p[i];
    }

    for(int i=0; i<n*7; i++){
        total += p[i%7];
        if(total>=n){
            cout<<(i%7)+1<<endl;
            break;
        }
    }

    return 0;
}