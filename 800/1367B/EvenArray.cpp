#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
     int n;
     cin>>n;
     int a[n];
     int e=0, o=0;
     for(int j=0; j<n; j++){
        cin>>a[j];
        if(j%2==0 && a[j]%2!=0){
            e++;
        }else if(j%2!=0 && a[j]%2==0){
            o++;
        }
     }
     if(e==o){
        cout<<e<<endl;
     }else{
        cout<<-1<<endl;
     }
    }

    return 0;
}