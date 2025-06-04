#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int h[n];
    for(int i=0; i<n; i++){
        cin>>h[i];
    }

    int currentHeight = 0;
    int cost = 0;
    int energy = 0;
    for(int i=0; i<n; i++){
        if(energy < (h[i]-currentHeight)){
            cost += (h[i] - currentHeight) - energy;
            energy = 0;
        } else {
            energy += (currentHeight-h[i]);
        }

        currentHeight = h[i];
    }

    cout<<cost<<endl;

    return 0;
}