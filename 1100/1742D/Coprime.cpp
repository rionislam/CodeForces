#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int> pairs[1001];

    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            if(__gcd(i, j) == 1){
                pairs[i].push_back(j);
            }
        }
    }

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        int id[1001] = {0};
        
        for(int i=0; i<n; i++){
            cin>>a[i];
            id[a[i]] = i+1;
        } 

        int ans = -1;

        for(int i=0; i<n; i++){
            for(int j=0; j<pairs[a[i]].size(); j++){
                if(id[a[i]] != 0 && id[pairs[a[i]][j]] != 0){
                    ans = max(ans, id[a[i]]+id[pairs[a[i]][j]]);
                }
            }
            
        }

        cout<<ans<<endl;
    }

    return 0;
}