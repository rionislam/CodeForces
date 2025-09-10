#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, l, r;
        cin>>n>>l>>r;
        int arr[n];

        bool possible = true;

        for(int i=1; i<=n; i++){
            int x = (((l-1)/i)+1)*i;

            if(x > r){
                possible = false;
                break;
            }

            arr[i-1] = x;
        }

        if(possible){
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}