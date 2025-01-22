#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        bool a;
        int l=0, c=0;

        for(int i=0; i<n; i++){
            cin>>a;
            if(a){
                if(c>l){
                    l=c;
                }
                c=0;
            }else{
                c++;
            }
        }
        if(c>l){
            l=c;
        }

        cout<<l<<endl;
    }

    return 0;
}