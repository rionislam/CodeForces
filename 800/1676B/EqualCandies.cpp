#include<iostream>
using namespace std;

void sortAsc(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
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

        sortAsc(a, n);

        int ate = 0;

        for(int i=1; i<n; i++){
            ate += a[i]-a[0];
        }

        cout<<ate<<endl;
    }

    return 0;
}