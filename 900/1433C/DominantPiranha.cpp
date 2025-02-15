#include<iostream>
using namespace std;

bool isDominant(int arr[], int n, int x){
    int left = 0;
    int right = 0;
    int y = arr[x];
    while(x-left>=0&&x+right<n){
        if(x-left-1>=0 && arr[x-left-1]<y){
            arr[x-left-1]=0;
            left++;
            y++;
        }else if(x+right+1<n && arr[x+right+1]<y){
            arr[x+right+1]=0;
            right++;
            y++;
        }else{
            break;
        }
    }

    if(y-arr[x]==n-1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool dExits = false;
        int dIndex = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            if(i-1>=0&&a[i-1]<a[i]||(i+1<n&&a[i+1]<a[i])){
                if(isDominant(a, n, i)){
                    dExits = true;
                    dIndex = i+1;
                    break;
                }
            }
        }

        if(dExits){
            cout<<dIndex<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}