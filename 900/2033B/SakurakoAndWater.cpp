#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        int count = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }

        for(int i=0; i<n; i++){
            int min1=INT_MAX;
            int min2=INT_MAX;
            for(int j=0; j<n-i; j++){
                if(i==0){
                    if(a[j][j]<min1){
                        min1=a[j][j];
                    }
                }else{
                    if(a[j][i+j]<min1){
                        min1=a[j][i+j];
                    }
                    if(a[j+i][j]<min2){
                        min2=a[j+i][j];
                    }
                }
            }
            
            if(min1<0){
                count += abs(min1);
            }

            if(min2<0){
                count += abs(min2);
            }
        }

        cout<<count<<endl;
    }

    return 0;
}