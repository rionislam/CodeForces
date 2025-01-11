#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n[t];
    for(int i=0; i<t; i++){
        cin>>n[i];
    }

    for(int i=0; i<t; i++){
        int a[n[i]/2] = {0};
        int b[n[i]/2] = {0};
        int sumA=0, sumB=0;
        for(int j=0; j<n[i]; j++){
            if(j%2==0){
                a[j/2] = j+2;
            }else{
                b[j/2] = j;
            }
        }
        for(int j=0; j<n[i]/2; j++){
            sumA += a[j];
            if(j!=n[i]/2-1){
                sumB += b[j];
            }else{
                while(sumB<sumA){
                    b[j] = b[j]+2;
                    if(sumB+b[j]>=sumA){
                        sumB += b[j];
                    }
                }
            }
            
        }

        if(sumA == sumB){
            cout<<"YES"<<endl;
            for(int j=0; j<n[i]/2; j++){
                cout<<a[j]<<" ";
            }
            for(int j=0; j<n[i]/2; j++){
                cout<<b[j]<<" ";
            }
            cout<<"\n";
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}