#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findMax(const vector<int>& v) {
    int maxValIndex = 0;
    for(int i = 1; i < v.size(); i++) {
        if (v[i]> v[maxValIndex]) {
            maxValIndex = i;
        }
    }
    return maxValIndex;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a;
        long long ans = 0;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(x);

            if(x==0){
                int j = findMax(a);
                if(a[j]>0){
                    ans += a[j];
                    a[j] = -1;
                    a.erase(a.begin() + j);
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}