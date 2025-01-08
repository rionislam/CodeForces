#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n[t];
    for(int i=0; i<t; i++){
        cin>>n[i];
    }

    for(int i=0; i<t; i++){
        int current = 1, count = 0;
        while(true){
            if(current%3 != 0 && current%10 !=3){
                count++;
                if(count == n[i]){
                    cout<<current<<endl;
                    break;
                }
            }
            current++;
        }
    }

    return 0;
}