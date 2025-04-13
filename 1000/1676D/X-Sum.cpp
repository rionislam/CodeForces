#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }

        int maxSum = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int sum = a[i][j];
                int x=i-1, y=j-1;
                while(x>=0&&y>=0){
                    sum += a[x][y];
                    x--;
                    y--;
                }

                x = i-1, y=j+1;
                while(x>=0&&y<m){
                    sum += a[x][y];
                    x--;
                    y++;
                }

                x = i+1; y=j+1;
                while(x<n&&y<m){
                    sum += a[x][y];
                    x++;
                    y++;
                }

                x = i+1; y=j-1;
                while(x<n&&y>=0){
                    sum += a[x][y];
                    x++;
                    y--;
                }

                if(sum>maxSum){
                    maxSum = sum;
                }
            }
        }

        cout<<maxSum<<endl;
    }

    return 0;
}