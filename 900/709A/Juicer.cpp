#include<iostream>
using namespace std;

int main(){
    int n, b, d;
    cin>>n>>b>>d;
    int a[n];
    int total = 0;
    int count = 0;


    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<=b){
            if(total+a[i]<=d){
                total+=a[i];
            }else{
                count++;
                total=0;
            }
        }
    }

    cout<<count<<endl;

    return 0;
}