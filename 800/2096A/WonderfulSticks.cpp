#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        pair<int, int> a[n];
        int x = 1;
        int y = 1;
        a[0].first = x;
        a[0].second = 0;
        for(int i=0; i<(n-1); i++){
            if(s[i]=='<'){
                x--;
                a[i+1].first = x;
            }else{
                y++;
                a[i+1].first = y;
            }
            
            a[i+1].second = i+1;
        }

        sort(a, a+n);

        int ans[n];

        for(int i=0; i<n; i++){
            ans[a[i].second] = i+1;
        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
