#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int  x[n];
        int frequency[n+1]={0};
        int score = 0;

        for(int i=0; i<n; i++){
            cin>>x[i];
            frequency[x[i]]++;
        }

        for(int i=0; i<n; i++){
            if((k-x[i])>=0&&k-x[i]<=n){
                if(k-x[i]==x[i]){
                    if(frequency[x[i]]>1){
                        score++;
                        frequency[x[i]]-=2;
                    }
                }else if(frequency[k-x[i]]>0&&frequency[x[i]]>0){
                    score++;
                    frequency[k-x[i]]--;
                    frequency[x[i]]--;
                }
            }
        }

        cout<<score<<endl;
    }

    return 0;
}