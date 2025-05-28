#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        
        int leftMostIndex[n+1]={0};
        int rightMostIndex[n+1]={0};
        int count[n+1]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(leftMostIndex[a[i]]==0) leftMostIndex[a[i]]=i+1;
            rightMostIndex[a[i]]=i+1;
            count[a[i]]++;
        }

        bool possible=false;

        for(int i=1; i<=n; i++){
            if(count[i]==3){
                possible = true;
                break;
            }else if((leftMostIndex[i]+1)<rightMostIndex[i]){
                possible = true;
                break;
            }
        }

        if(possible){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}