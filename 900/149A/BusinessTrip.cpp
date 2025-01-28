#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int k;
    cin>>k;
    int a[12];

    for(int i=0; i<12; i++){
        cin>>a[i];
    }

    sort(a, a+12);
    int sum=0;
    int count=0;
    for(int i=0; i<12; i++){
        if(sum>=k){
            break;
        }
        sum+=a[11-i];
        count++;
    }

    if(sum>=k){
        cout<<count<<endl;
    }else{
        cout<<-1<<endl;
    }

    return 0;
}