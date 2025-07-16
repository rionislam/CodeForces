#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long a[n];
        long long evenCount = 0;
        long long biggestOdd = 0;
        long long biggestEven = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2==0){
                evenCount++;
                biggestEven = max(a[i], biggestEven);
            }else{
                biggestOdd = max(a[i], biggestOdd);
            }
        }

        if(evenCount == n || evenCount == 0){
            cout<<0<<endl;
            continue;
        }

        sort(a, a+n);

        for(int i=0; i<n; i++){
            if(a[i]%2==0 && a[i]<biggestOdd && a[i] != biggestEven){
                biggestOdd += a[i];
            }
        }

        if(biggestEven > biggestOdd){
            evenCount++;
        }

        cout<<evenCount<<endl;
    }

    return 0;
}