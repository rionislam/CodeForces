#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;
        char c[n][m];
        int countH[n]={0};
        int maxCount=0;
        int maxCountIndex;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>c[i][j];
                if(c[i][j]=='#'){
                    countH[i]++;
                }
            }
            if(countH[i]>maxCount){
                maxCount=countH[i];
                maxCountIndex = i;
            }
        }
        int current = 0;
        int b=0;
        for(int i=0; i<m; i++){
            if(c[maxCountIndex][i]=='#'){
                current++;
            }
            if(current==maxCount/2+1){
                b=i;
                break;;
            }
        }

        cout<<maxCountIndex+1<<" "<<b+1<<endl;
    }

    return 0;
}