#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long sumE = 0, sumO = 0;
        long long e=0, o=0;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(i % 2 == 0){
                sumE += x;
                e++;
            } else {
                sumO += x;
                o++;
            }
        }

        if(sumE%e==0 && sumO%o==0 && (sumE/e) == (sumO/o)){
            cout<<"Yes"<<endl;
        }else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}