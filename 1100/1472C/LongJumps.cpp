#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int scores[n] = {0};

        int max = 0;

        for(int i=(n-1); i>=0; i--){
            scores[i] = a[i];
            int j = i+a[i];
            if(j<n){
                scores[i] += scores[j];
            }

            if(scores[i] > max){
                max = scores[i];
            }
        }

        cout<<max<<endl;
    }

    return 0;
}