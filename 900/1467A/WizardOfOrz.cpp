#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = "";

        if(n==1){
            s += '9';
        }else{
            s+='9';
            s+='8';
            int x = 8;
            for(int i=2; i<n; i++){
                x++;
                if(x==10){
                    x=0;
                }
                s+= char('0'+x);
            }
        }

        cout<<s<<endl;
    }

    return 0;
}