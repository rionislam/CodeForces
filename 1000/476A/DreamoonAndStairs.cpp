#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int min = (n/2)+(n%2);
    int max = n;

    for(int i = min; i<=max; i++){
        if(i%m==0){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;

    return 0;
}