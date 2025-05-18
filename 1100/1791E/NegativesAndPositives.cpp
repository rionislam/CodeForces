#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        long long sum = 0;
        int negs = 0;
        int smallest = 1000000000;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += abs(a[i]);
            if(a[i] < 0){
                negs++;
            }

            if(abs(a[i]) < smallest){
                smallest = abs(a[i]);
            }
        }

        if(negs%2 == 1){
            cout<<sum - smallest - smallest<<endl;
        }else{
            cout<<sum<<endl;
        }
    }

    return 0;
}