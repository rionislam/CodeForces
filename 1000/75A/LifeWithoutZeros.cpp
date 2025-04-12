#include<iostream>
using namespace std;

int main(){
    string a, b, c;
    cin>>a>>b;
    c = to_string(stoll(a)+stoll(b));

    for(int i=0; i<a.length(); i++){
        if(a[i]=='0'){
            a.erase(i, 1);
            i--;
        }
    }

    for(int i=0; i<b.length(); i++){
        if(b[i]=='0'){
            b.erase(i, 1);
            i--;
        }
    }

    for(long long i=0; i<c.length(); i++){
        if(c[i]=='0'){
            c.erase(i, 1);
            i--;
        }
    }

    if((stoll(a)+stoll(b))==stoll(c)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}