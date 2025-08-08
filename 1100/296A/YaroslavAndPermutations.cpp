#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count[1001] = {0};
    int maxCount = 0;

    int x;
    for(int i=0; i<n; i++){
        cin>>x;
        count[x]++;
        maxCount = max(maxCount, count[x]);
    }

    if((n+1)/2 >= maxCount){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}