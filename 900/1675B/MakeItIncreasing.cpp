#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool isPossible = true;
        int count = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
        }


        for(int i=n-1; i>0; i--){
            while(a[i-1]>=a[i]){
                if(a[i-1]==0){
                    isPossible=false;
                    break;
                }
                a[i-1] /= 2;
                count++;
            } 
            if(!isPossible) break;
        }
            
        

        if(isPossible){
            cout<<count<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }

    return 0;
}