#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    if(a[0] >= 'a' && a[0] <= 'z'){
        a[0] = toupper(a[0]);
    }

    cout<<a;
    return 0;
}