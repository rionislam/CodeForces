#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool insideAB[12]={false};
        for(int i=min(a,b)-1; i<max(a,b); i++){
            insideAB[i]=true;
        }

        if(insideAB[c-1]!=insideAB[d-1]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}