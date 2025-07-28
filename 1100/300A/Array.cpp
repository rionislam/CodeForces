#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    int first=-1, second=-1;
    int second1=-1, second2=-1;

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(first == -1 && a[i] < 0){
            first = i;
        }else if(second == -1 && a[i] > 0){
            second = i;
        }else if(second1 == -1 && a[i] < 0){
            second1 = i;
        }else if(second2 == -1 && a[i] < 0){
            second2 = i;
        }
    }


    cout<<1<<" "<<a[first]<<endl;
    if(second == -1){
        cout<<2<<" "<<a[second1]<<" "<<a[second2]<<endl;
        cout<<n-3<<" ";
    }else{
        cout<<1<<" "<<a[second]<<endl;
        second1 = second2 = -1;
        cout<<n-2<<" ";
    }
    
    for(int i=0; i<n; i++){
        if(i == second1 || i == second2 || i == first || i == second){
            continue;
        }
        cout<<a[i]<<" ";
    }

    return 0;
}