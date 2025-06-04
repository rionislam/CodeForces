#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        sort(arr, arr + n);
        int left = 0, right = 0;

        for(int i = 0; i < n; i++){
            if(arr[n-1]%2 == 0 && arr[i]%2 == 0){
                break;
            }else if(arr[n-1]%2 == 1 && arr[i]%2 == 1){
                break;
            }
            left++;
        }

        for(int i = n - 1; i >= 0; i--){
            if(arr[0]%2 == 0 && arr[i]%2 == 0){
                break;
            }else if(arr[0]%2 == 1 && arr[i]%2 == 1){
                break;
            }
            right++;
        }

        cout<<min(left, right)<<endl;
    }


    return 0;
}