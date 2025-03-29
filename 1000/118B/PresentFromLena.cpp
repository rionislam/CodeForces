#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int x = 0;
    for(int i=0; i<(n*2)+1; i++){
        int k=0;
        for(int j=0; j<(n*2)+1; j++){
            if(j>=(n-x)&&j<=(n+x)){
                cout<<k;
                if(j<n){
                    k++;
                }else{
                    if(k==0){
                        break;
                    }
                    k--;
                }
            }else{
                cout<<" ";
            }
            cout<<" ";
        }
        if(i<n){
            x++;
        }else{
            x--;
        }
        cout<<endl;
    }
    return 0;
}