#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int r[n];
        int prefixSumR = 0;
        int maxPrefixSumR = 0;

        for(int i=0; i<n; i++){
            cin>>r[i];
            prefixSumR += r[i];
            if(prefixSumR>maxPrefixSumR){
                maxPrefixSumR = prefixSumR;
            }
        }

        int m;
        cin>>m;
        int b[m];
        int prefixSumB = 0;
        int maxPrefixSumB = 0;

        for(int i=0; i<m; i++){
            cin>>b[i];
            prefixSumB += b[i];
            if(prefixSumB>maxPrefixSumB){
                maxPrefixSumB = prefixSumB;
            }
        }

        cout<<maxPrefixSumR+maxPrefixSumB<<endl;
    }

    return 0;
}