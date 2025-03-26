#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        bool alreadyDevisable = false;
        int closest = 0;
        int remainder = 0;
        int even = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            int r = a[i]%k;
            if(r==0){
                alreadyDevisable = true;
            }else if(r>remainder){
                remainder = a[i]%k;
                closest = a[i];
            }

            if(a[i]%2==0){
                even++;
            }
        }
       

        if(alreadyDevisable){
            cout<<0<<endl;
            continue;
        }
 
        if(k==4){
            cout<<min(k-remainder, max(0, 2-even))<<endl;
            continue;
        }

        cout<<k-remainder<<endl;
    }
    
    return 0;
}