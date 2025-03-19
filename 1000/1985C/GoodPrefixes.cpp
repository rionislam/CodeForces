#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int count = 0;
        long long prefix_sum = 0;
        int biggest = 0;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(a>biggest){
                biggest = a;
            }
            prefix_sum += a;
            if(prefix_sum==biggest*2){
                count++;
            }
            
        }

        cout<<count<<endl;
    }

    return 0;
}