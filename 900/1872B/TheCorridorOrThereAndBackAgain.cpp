#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int d[n];
        int s[n];

        for(int i=0; i<n; i++){
            cin>>d[i]>>s[i];
        }

        int k = d[0]+((s[0]/2)+s[0]%2)-1;
        for(int i=1; i<n; i++){
            int x = d[i]+((s[i]/2)+s[i]%2)-1;
            if(k>=x){
                    k = x;
            }
        }

        cout<<k<<endl;
    }

    return 0;
}