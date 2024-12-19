#include<iostream>
using namespace std;

int main(){
    int n, p, q;
    cin>>n;
    int count[n]={0};
    cin>>p;
    for(int i = 0; i<p; i++){
        int x;
        cin>>x;
        count[x-1]++;
    }
    cin>>q;
    for(int i = 0; i<q; i++){
        int x;
        cin>>x;
        count[x-1]++;
    }

    for(int i = 0; i<n; i++){
        if(count[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}