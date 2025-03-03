#include<iostream>
using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count[n+1]={0};
        int distinct  = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            if(count[a[i]]==0){
                distinct++;
            }
            count[a[i]]++;
            
        }

        int score = n-distinct;

        if(score!=0&&score==n-1){
            cout<<0<<endl;
        }else{
            int c=-1,d=-1;
            int y=-1,z=-1;
            int f=0,k=0;
            for(int i=0; i<n; i++){
                if(count[a[i]]==1){
                    if(k==0){
                        y=i;
                        z=i;
                    }else if(z+1==i){
                        z=i;
                    }
                    k++;
                }else{
                    if(f<k){
                        c=y;
                        d=z;
                        f=k;
                    }
                    k=0;
                }
            }

            if(f<k){
                c=y;
                d=z;
                f=k;
            }

            if(c!=-1){
                cout<<c+1<<" "<<d+1<<endl;
            }else{
                cout<<0<<endl;
            }
            
        }
    }

    return 0;
}