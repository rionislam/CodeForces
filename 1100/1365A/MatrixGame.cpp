#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        int rows[n] = {0};
        int cols[m] = {0};
        int x;
        for(int i=0; i<n; i++){
            bool found = false;
            for(int j=0; j<m; j++){
                cin>>x;
                if(x == 1){
                    found = true;
                    cols[j] = 1;
                }
            }

            if(found) rows[i] = 1;
        }

        int cRow = 0;
        int cCol = 0;
        for(int i=0; i<n; i++){
            if(rows[i] == 0) cRow++;
        }

        for(int i=0; i<m; i++){
            if(cols[i] == 0) cCol++;
        }

        int count = min(cRow, cCol);

        if(count % 2 == 1){
            cout<<"Ashish"<<endl;
        }else{
            cout<<"Vivek"<<endl;
        }
    }

    return 0;
}