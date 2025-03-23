#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n==1){
            cout<<1<<endl;
            continue;
        }

        if(n==2){
            cout<<-1<<endl;
            continue;
        }

        int a[n][n]={0};
        int x = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if((i+j)%2==0){
                    x++;
                    a[i][j]=x;
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if((i+j)%2!=0){
                    x++;
                    a[i][j]=x;
                }
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}