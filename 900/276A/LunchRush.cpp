#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int biggest = INT_MIN;

    while(n--){
        int f, t;
        cin>>f>>t;
        int joy = 0;
        if(k<t){
            joy = f-(t-k);
        }else{
            joy = f;
        }

        if(joy>biggest){
            biggest = joy;
        }
    }

    cout<<biggest<<endl;
    return 0;
}