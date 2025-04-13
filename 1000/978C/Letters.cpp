#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    long long a[n];
    long long prefixSum[n+1] = {0};

    for(int i=0; i<n; i++){
        cin>>a[i];
        prefixSum[i+1] = prefixSum[i]+a[i];
    }

    for(int i=0; i<m; i++){
        long long b;
        cin>>b;
        int x=0, y=n+1;
        int count = y-1;
        
        while(true){
            int midPoint = x + count/2+count%2;
            if(b<prefixSum[midPoint]){
                if(b>prefixSum[midPoint-1]){
                    cout<<midPoint<<" "<<b-prefixSum[midPoint-1]<<endl;
                    break;
                }
                y = midPoint;
            }else if(b>prefixSum[midPoint]){
                if(b<prefixSum[midPoint+1]){
                    cout<<midPoint+1<<" "<<b-prefixSum[midPoint]<<endl;
                    break;
                }
                x = midPoint;
            }else{
                cout<<midPoint<<" "<<b-prefixSum[midPoint-1]<<endl;
                break;
            }
            count = y-x;
        }
    }

    return 0;
}