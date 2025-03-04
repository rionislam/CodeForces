#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sumX = 0, sumY = 0, sumZ = 0;

    for(int i=0; i<n; i++){
        int x, y, z;
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }

    if(sumX==sumY&&sumY==sumZ&&sumZ==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}