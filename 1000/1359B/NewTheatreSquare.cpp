#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m, x, y;
        cin>>n>>m>>x>>y;

        y = min(x*2, y);

        int cost = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char c;
                cin>>c;

                if(count==2){
                    cost += y;
                    count = 0;
                }

                if(c=='.'){
                    count++;
                }else{
                    if(count==1){
                        cost += x;
                        count = 0;
                    }
                }
            }
            if(count==2){
                cost += y;
            }else if(count==1){
                cost += x;
            }

            count = 0;
        }

        cout<<cost<<endl;
    }

    return 0;
}