#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int a[n];
    int count[100001] = {0};

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int suffixCount[n+1] = {0};
    for(int i = n-1; i>=0; i--){
        if(count[a[i]] == 0){
            count[a[i]]++;
            suffixCount[i] = suffixCount[i+1] + 1;
        }else{
            suffixCount[i] = suffixCount[i+1];
        }
    }

    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        cout<<suffixCount[x-1]<<endl;
    }

    return 0;
}