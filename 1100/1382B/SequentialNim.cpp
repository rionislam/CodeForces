#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        int ones = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] == 1)
                ones++;

        }

        int ans = 1;
        if(ones == n){
            if(n % 2 == 0)
                ans = 2;
            else
                ans = 1;
        }else{
            for(int i=0; i<n; i++){
                if(a[i]>1)
                    break;

                if(ans == 1)
                    ans = 2;
                else
                    ans = 1;
            }
        }
        
        

        if(ans == 1)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
        
    }

    return 0;
}