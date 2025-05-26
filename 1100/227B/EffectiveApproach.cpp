#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i].first;
        a[i].second = i + 1;
    }

    sort(a, a + n);

    int m;
    cin>>m;

    long long v=0, p=0;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        v += a[x-1].second;
        p += n-a[x-1].second+1;
    }

    cout<<v<<" "<<p<<endl;

    return 0;
}