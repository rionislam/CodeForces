#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    int h[n];
    int prefix[n+1] = {0};

    for(int i=0; i<n; i++){
        cin>>h[i];
        prefix[i+1] = prefix[i] + h[i];
    }

    int min = 1e9;
    int minIndex = -1;
    for(int i=0; i<(n-k+1); i++){
        int sum = prefix[i+k] - prefix[i];
        if(sum < min){
            min = sum;
            minIndex = i;
        }
    }

    cout<<minIndex+1<<endl;

    return 0;
}