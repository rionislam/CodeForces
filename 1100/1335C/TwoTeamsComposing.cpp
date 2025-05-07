#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int cnt[n+1] = {0};
        int maxCnt = 0;
        int diff = 0;
        
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            cnt[x]++;
            if(cnt[x] > maxCnt){
                maxCnt = cnt[x];
            }

            if(cnt[x] == 1){
                diff++;
            }
        }

        cout<<max(min(diff-1, maxCnt), min(diff, maxCnt-1))<<endl;
    }

    return 0;
}