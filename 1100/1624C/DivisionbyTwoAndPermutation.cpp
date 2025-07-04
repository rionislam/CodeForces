#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++) cin>>a[i];

        sort(a, a+n);

        bool used[n] = {false};

        bool possible = true;

        for(int i=0; i<n; i++){
            if(possible){
                int x = a[n-i-1];
                while(x > n || used[x-1]){
                    x /= 2;
                }

                if(x == 0){
                    possible = false;
                }else{
                    used[x-1] = true;
                }
            }
        }

        if(possible){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}