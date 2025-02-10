#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long x[n];
        long long totalTime = b;

        for(int i=0; i<n; i++){
            cin>>x[i];
        }

        sort(x, x+n);
        for(int i=0; i<n; i++){
            while(b){
                if(b+x[i]<=a){
                    b += x[i];
                    totalTime += x[i];
                    break;
                }else if(b==1){
                    b += x[i];
                    b = min(b,a);
                    totalTime += a-1;
                    break;
                }else{
                    b -= b-1;
                    continue;
                }
                b--;
            }
        }

        cout<<totalTime<<endl;
    }

    return 0;
}