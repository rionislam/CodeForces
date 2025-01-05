#include<iostream>
using namespace std;

int main(){
    int n, k, o=0;
    cin>>n>>k;
    int nums[n];
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    for(int i = 0; i<n; i++){
        if(nums[i] >= nums[k-1] && nums[i]>0){
            o++;
        }
    }

    cout<<o;
    return 0;
}