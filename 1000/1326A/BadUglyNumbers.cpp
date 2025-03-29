#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n==1){
            cout<<-1<<endl;
            continue;
        }

        string s = "2";

        for(int i=1; i<n; i++){
            s+= '3';
        }

        cout<<s<<endl;
    }
    return 0;
}