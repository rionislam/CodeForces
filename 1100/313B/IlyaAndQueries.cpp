#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n = s.length();;

    int a[n] = {0};

    for(int i=0; i<(n-1); i++){
        if(s[i] == s[i+1]){
            a[i+1] = a[i]+1;
        }else{
            a[i+1] = a[i];
        }
    }

    int m;
    cin>>m;
    while(m--){
        int l, r;
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}