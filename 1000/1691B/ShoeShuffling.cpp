#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int s[n];
        int ans[n];
        int last = -1;
        int count = 1;
        bool exists = true;


        for(int i=0; i<n; i++){
            cin>>s[i];
            if(s[i]==last){
                count++;
            }else{
                if(count==1&&i!=0){
                    exists = false;
                }
                if(i!=0){
                    for(int j=i-count; j<(i-1); j++){
                        ans[j] = j+2;
                    }
                    ans[i-1] = i-count+1;
                }
                count = 1;
                last = s[i];
            }
        }

        if(count>1){
            for(int j=n-count; j<(n-1); j++){
                ans[j] = j+2;
            }
            ans[n-1] = n-count+1;
        }else{
            exists = false;
        }
        

        if(exists){
            for(int i=0; i<n; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }

    return 0;
}