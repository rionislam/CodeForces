#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> a;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }

        sort(a.begin(), a.end());

        int ans = INT_MIN;

        int extraction = 0;
        if(n>1){
            for(int i=0; i<(n-1); i++){
                ans = max(ans, (a[i+1]-extraction) - (a[i]-extraction));
                extraction += a[i];
            }
        }
        if(a[0]>ans){
            ans = a[0];
        }

        cout<<ans<<endl;
    }

    return 0;
}