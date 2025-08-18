#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int b[1];
        cin>>b[0];

        bool possible = true;
        a[0] = min(b[0]-a[0], a[0]);

        for(int i=1; i<n; i++){
            if(min(b[0]-a[i], a[i])>=a[i-1]){
                a[i] = min(b[0]-a[i], a[i]);
            }else if(max(b[0]-a[i], a[i]) < a[i-1]){
                possible = false;
                break;
            }else{
                a[i] = max(b[0]-a[i], a[i]);
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