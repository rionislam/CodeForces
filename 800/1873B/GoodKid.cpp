#include<iostream>
#include<climits>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        int min = INT_MAX, minIndex;


        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<min){
                min=a[i];
                minIndex=i;
            }
        }
        a[minIndex]++;

        int product = 1;
        for(int i=0; i<n; i++){
            product *= a[i];
        }
        
        cout<<product<<endl;
    }

    return 0;
}