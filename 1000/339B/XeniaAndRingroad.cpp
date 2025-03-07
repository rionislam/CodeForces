#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    long long count = 0;
    int pointer = 1;

    for(int i=0; i<m; i++){
        int a;
        cin>>a;
        if(a<pointer){
            count += n-pointer+a;
        }else{
            count += a-pointer;
        }
        pointer = a;
    }

    cout<<count<<endl;

    return 0;
}