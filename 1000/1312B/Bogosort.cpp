#include<iostream>
using namespace std;


void sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a, n);

        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}