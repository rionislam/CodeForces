#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        int a[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((a[i][j]>a[i][j+1]||((j+1)==m))&&
                    (a[i][j]>a[i+1][j]||((i+1)==n))&&
                    (a[i][j]>a[i][j-1]||((j-1)==-1))&&
                    (a[i][j]>a[i-1][j]||((i-1)==-1))
                ){
                    int ma = 0;
                    if(j+1!=m){
                        ma = max(a[i][j+1], ma);
                    }

                    if(i+1!=n){
                        ma = max(a[i+1][j], ma);
                    }

                    if(j-1>=0){
                        ma = max(a[i][j-1], ma);
                    }

                    if(i-1>=0){
                        ma = max(a[i-1][j], ma);
                    }

                    a[i][j] = ma;
                    // cout<<ma<<endl;
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}