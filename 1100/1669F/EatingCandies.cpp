#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int w[n];
        for(int i = 0; i<n; i++){
            cin>>w[i];
        }

        int a=0, b=0;
        int ai=0, bi=n-1;
        int count = 0;

        while(ai <= bi){
            a += w[ai];
            while(a>b && ai < bi){
                b += w[bi];
                bi--;
            }

            if(a == b){
                count = ai + 1 + (n - bi - 1);
            }
            
            ai++;
        }

        

        cout<<count<<endl;
    }

    return 0;
}