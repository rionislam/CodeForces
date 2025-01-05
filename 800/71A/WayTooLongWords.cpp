#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--) {
        char s[101];
        cin>>s;
        if(strlen(s) > 10){
            cout<<s[0]<<strlen(s)-2<<s[strlen(s)-1]<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}
