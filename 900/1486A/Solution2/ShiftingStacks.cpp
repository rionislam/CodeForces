#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int h[n];
        long long excess = 0;
        bool possible = true;

        for(int i=0; i<n; i++){
            cin>>h[i];
        }

        for(int i=0; i<n; i++){
            excess += h[i];
            if(excess<i){
                possible = false;
                break;
            }
            excess -= i;
        }

        if(possible){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}