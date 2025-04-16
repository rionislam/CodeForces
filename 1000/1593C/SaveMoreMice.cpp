#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int a[k];

        for(int i=0; i<k; i++){
            cin>>a[i];
        }

        sort(a, a+k);
        int c = 0;
        int ans = 0;
        for(int i=k-1; i>=0; i--){
            if(a[i]>c){
                ans++;
                c += n-a[i];
            }else{
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}