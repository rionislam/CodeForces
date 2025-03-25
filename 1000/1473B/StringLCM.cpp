#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s, t;
        cin>>s>>t;
        int lcm =(s.length()*t.length())/ __gcd(s.length(), t.length());

        string fs = "";
        string ft = "";
        for(int i=0; i<lcm/s.length(); i++){
            fs += s;
        }
        for(int i=0; i<lcm/t.length(); i++){
            ft += t;
        }

        if(fs==ft){
            cout<<fs<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}