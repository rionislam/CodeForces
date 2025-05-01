#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    pair<int, int> a[n];

    for(int i=0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }

    sort(a, a+n);

    bool poor = true;
    for(int i=0; i<(n-1); i++){
        if(a[i].second > a[i+1].second){
            poor = false;
            break;
        }
    }

    if(poor){
        cout<<"Poor Alex"<<endl;
    }else{
        cout<<"Happy Alex"<<endl;
    }

    return 0;
}