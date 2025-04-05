#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m, k;
        cin>>n>>m>>k;

        int a[k+1]={0};
        int b[k+1]={0};

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x<=k){
                a[x]++;
            }
        }

        for(int i=0; i<m; i++){
            int x;
            cin>>x;
            if(x<=k){
                b[x]++;
            }
        }

        int occuringOnlyInA = 0;
        int occuringOnlyInB = 0;
        int occuringInBoth = 0;
        for(int i=1; i<=k; i++){
            if(a[i]>0&&b[i]>0){
                occuringInBoth++;
            }else if(a[i]>0){
                occuringOnlyInA++;
            }else if(b[i]>0){
                occuringOnlyInB++;
            }
        }

        if(occuringOnlyInA<=k/2&&occuringOnlyInB<=k/2&&(occuringOnlyInA+occuringOnlyInB+occuringInBoth)==k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}