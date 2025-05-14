#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];

        int evenCount = 0, oddCount = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] % 2 == 0){
                evenCount++;
            }else{
                oddCount++;
            }
        }

        bool exists = false;

        sort(a, a+n);

        for(int i=0; i<n-1; i++){
            if(evenCount%2 == 0 && oddCount%2 == 0){
                exists = true;
                break;
            }
            if(a[i]+1 == a[i+1]){
                evenCount--;
                oddCount--;
                i++;
            }
        }

        if(evenCount%2 == 0 && oddCount%2 == 0){
            exists = true;
        }

        if(exists){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}