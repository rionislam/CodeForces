#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int participated[n] = {0};
    int membersAvailable = 0;
    for(int i=0; i<n; i++){
        cin>>participated[i];

    }

    for(int i=0; i<n; i++){
        if(5-participated[i]>=k){
            membersAvailable++;
        }
    }

    int teams = membersAvailable/3;
    cout<<teams;
    
    return 0;
}