#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b;
        cin>>a>>b;
        if(!a){
            cout<<0<<endl;
            continue;
        }

        if(a == b){
            cout<<2<<endl;
            continue;
        }

        if(a < b){
            cout<<1<<endl;
            continue;
        }

        int minAns = a+3;

        for(int i=(b<2?2-b:0); i<30; i++){
            int A = a, B = b+i;
            int ans = i;
            while(A){
                A /= B;
                ans++;
            }

            if(ans < minAns){
                minAns = ans;
            }
        }

        cout<<minAns<<endl;
    }

    return 0;
}