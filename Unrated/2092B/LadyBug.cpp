#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string a, b;
        cin>>a>>b;
        string x, y;
        int zerosInX=0, zerosInY=0;

        for(int i=0; i<n; i++){
            if(i%2==0){
                x += a[i];
                y += b[i];
                if(a[i]=='0'){
                    zerosInX++;
                }
                if(b[i]=='0'){
                    zerosInY++;
                }
            }else{
                x += b[i];
                y += a[i];
                if(a[i]=='0'){
                    zerosInY++;
                }
                if(b[i]=='0'){
                    zerosInX++;
                }
            }
        }

        if(zerosInX>=((n+1)/2)&&zerosInY>=(n/2)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}