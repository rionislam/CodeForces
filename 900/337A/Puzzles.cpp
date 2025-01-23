#include<iostream>
#include<climits>
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
    int n, m;
    cin>>n>>m;
    int f[m];
    int diff = INT_MAX;

    for(int i=0; i<m; i++){
        cin>>f[i];
    }

    sortAsc(f, m);


    for(int i=0; i<(m-n)+1; i++){
        int x=f[i+n-1]-f[i];
        if(x<diff){
            diff=x;
        }
    }

    cout<<diff;
    return 0;

}