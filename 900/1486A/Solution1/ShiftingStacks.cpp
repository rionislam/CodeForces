#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int h[n];
        int need=0;
        long long sum=0;
        bool possible = true;

        for(int i=0; i<n; i++){
            cin>>h[i];
        }

        for(int i=0; i<n; i++){
            need += i;
            sum += h[i];
            if(sum<need){
                possible = false;
                break;
            }
        }

        if(possible){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}