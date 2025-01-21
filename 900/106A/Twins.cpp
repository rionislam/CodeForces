#include<iostream>
using namespace std;

void sortAsc(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int sum2=0;
    int count=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }

    sortAsc(a, n);



    for(int i=n-1; i>=0; i--){
        sum2+=a[i];
        count++;
        if(sum2>sum/2){
            break;
        }
    }

    cout<<count<<endl;
    return 0;
}