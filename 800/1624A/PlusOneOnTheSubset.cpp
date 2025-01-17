#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int max=INT_MIN;
        int min=INT_MAX;
        while(n--){
            int a;
            cin>>a;
            if(a>max){
                max = a;
            }
            if(a<min){
                min = a;
            }
        }
        cout<<max-min<<endl;
    }

    return 0;
}