#include<iostream>
using namespace std;

int main(){
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    string s;
    cin>>s;
    int c = 0;

    for(int i=0; i<s.length(); i++){
        int index = s[i]-'0';
        c += a[index-1];
    }

    cout<<c;

    return 0;
}