#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int ans = 0;

        for(int i=0; i<k; i++){
            if(s[i]=='W'){
                ans++;
            }
        }

        int x = ans;
        for(int i=1; i<n-k+1; i++){
            if(s[i-1]=='W'){
                x--;
            }

            if(s[i+k-1]=='W'){
                x++;
            }
            
            ans = min(ans, x);

            if(ans == 0){
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}