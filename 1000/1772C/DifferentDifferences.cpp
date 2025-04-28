#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int k, n;
        cin>>k>>n;


        int x=1;
        for(int i=0; i<k; i++){
            if((n-x)==(k-i) && i != 0){
                x++;
            }else if((n-(x+i-1))<(k-i)){
                int y = x+i;
                while((n-y)<(k-i)){
                    y--;
                }
                x = y;
            }else if((x+i)<n){
                x += i;
            }else{
                x = n;
            }

            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}