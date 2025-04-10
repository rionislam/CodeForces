#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int maxCount = 1;
    int count = 1;

    int lastH, lastM;
    cin>>lastH>>lastM;

    for(int i=1; i<n; i++){
        int h, m;
        cin>>h>>m;

        if(lastH==h&&lastM==m){
            count++;
        }else{
            if(count>maxCount){
                maxCount = count;
            }
            count = 1;
        }

        lastH = h;
        lastM = m;
    }

    if(count>maxCount){
        maxCount = count;
    }

    cout<<maxCount<<endl;

    return 0;
}