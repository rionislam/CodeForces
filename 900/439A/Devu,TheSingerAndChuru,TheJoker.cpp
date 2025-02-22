#include<iostream>
using namespace std;

int main(){
    int n, d;
    cin>>n>>d;

    int t[n];
    int sum = 0;

    for(int i=0; i<n; i++){
        cin>>t[i];
        sum+=t[i];
    }

    if(sum+10*(n-1)>d){
        cout<<-1<<endl;
    }else{
        cout<<(d-sum)/5<<endl;
    }

    return 0;
}