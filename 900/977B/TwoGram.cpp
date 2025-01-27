#include<iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    string tg[n-1]={""};
    int tgc[n-1]={0};

    for(int i=0; i<n-1; i++){
        tg[i] += s[i];
        tg[i] += s[i+1];
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(tg[i]==tg[j]){
                tgc[i]++;
            }
        }
    }

    int biggest = 0;
    int biggestIndex;

    for(int i=0; i<n-1; i++){
        if(biggest<tgc[i]){
            biggest=tgc[i];
            biggestIndex=i;
        }
    }

    cout<<tg[biggestIndex];
    return 0;

}