#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int s, n;
    cin>>s>>n;

    pair<int, int> a[n];

    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        a[i].first = x;
        a[i].second = y;
    }

    sort(a, a+n);

    bool possible = true;
    for(int i=0; i<n; i++){
        if(s<=a[i].first){
            possible = false;
            break;
        }
        s += a[i].second;
    }

    if(possible){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}