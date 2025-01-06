#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string numbers[n] = {"0"};
    for(int i = 0; i<n; i++){
        cin>>numbers[i];
    }

    for(int i = 0; i<n; i++){
        int sum1 = (int)numbers[i][0]+(int)numbers[i][1]+(int)numbers[i][2];
        int sum2 = (int)numbers[i][3]+(int)numbers[i][4]+(int)numbers[i][5];
        if(sum1 == sum2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}