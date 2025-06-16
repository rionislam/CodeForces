#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;

    int a[51]={0};
    vector<pair<int, int>> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(a[x]==0){
            a[x] = i+1;
            arr.push_back({x, i+1});
        }
    }

    int arrLen = arr.size();

    while(q--){
        int t;
        cin>>t;
        int ansI = 0;
        for(int i=0; i<arrLen; i++){
            if(arr[i].first == t){
                ansI = i;
                break;
            }
        }

        if(arr[ansI].second != 1){
            for(int i=(ansI-1); i>=0; i--){
                arr[i].second++;
            } 
        }

        cout<<arr[ansI].second<<" ";
        pair<int, int> x = {t, 1};
        arr.erase(arr.begin()+ansI);
        arr.insert(arr.begin(), x);
    }
    cout<<endl;

    return 0;
}