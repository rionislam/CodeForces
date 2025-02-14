#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int p[n]={0};

        for(int i=0; i<n; i++){
            cin>>p[i];
        }

        bool possible = false;
        int j = 0;
        for(int i=1; i<n-1; i++){
            if(p[i]>p[i-1]&&p[i]>p[i+1]){
                possible = true;
                j=i+1;
                break;
            }
        }

        if(possible){
            cout<<"Yes"<<endl;
            cout<<j-1<<" "<<j<<" "<<j+1<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
}