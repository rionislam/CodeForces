#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int arr[4]={a,b,c,d};
    int count=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}