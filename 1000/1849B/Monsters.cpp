#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        pair<int, int> a[n];

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x%k==0){
                a[i].first = k;
            }else{
                a[i].first = x%k;
            }
            a[i].second = i+1;
        }

        sort(a, a + n, [](pair<int, int> &p1, pair<int, int> &p2) {
            if (p1.first == p2.first)
                return p1.second < p2.second;
            return p1.first > p2.first;
        });

        for(int i=0; i<n; i++){
            cout<<a[i].second<<" ";
        }

        cout<<endl;
    }

    return 0;
}