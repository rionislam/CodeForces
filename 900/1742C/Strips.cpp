#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        char a[8][8] = {'\0'};
        int countR[8] = {0};
        int mostR = 0;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>a[i][j];
                if(a[i][j]=='R'){
                    countR[i]++;
                }
            }

            if(countR[i]>mostR){
                mostR=countR[i];
            }
        }

        if(mostR<8){
            cout<<"B"<<endl;
        }else{
            cout<<"R"<<endl;
        }

    }

    return 0;
}