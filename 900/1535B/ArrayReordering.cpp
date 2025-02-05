#include<iostream>
#include<algorithm>
using namespace std;

void sortEvenFirstDesc(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if((arr[j]%2==0&&arr[j+1]%2==0&&arr[j]<arr[j+1])||(arr[j]%2==1&&arr[j+1]%2==0)){
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

        sortEvenFirstDesc(a, n);

        int count = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                count += __gcd(a[i], 2*a[j])>1;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}