#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    char c[n][m];
    int C=0, M=0, Y=0, W=0, B=0, G=0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>c[j][i];
            if(c[j][i]=='C'){
                C++;
            }else  if(c[j][i]=='M'){
                M++;
            }else if(c[j][i]=='Y'){
                Y++;
            }else if(c[j][i]=='W'){
                W++;
            }else if(c[j][i]=='B'){
                B++;
            }else if(c[j][i]=='C'){
                G++;
            }
        }
    }

    if(C!=0||M!=0||Y!=0){
        cout<<"#Color"<<endl;
    }else{
        cout<<"#Black&White"<<endl;
    }

    return 0;
}