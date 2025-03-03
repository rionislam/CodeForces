#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        char last = '0';

        for(int i=0; i<n; i++){
            if(s[i]!=last){
                last = s[i];
                count++;
            }
        }

        cout<<count<<endl;
    }

    return 0;
}