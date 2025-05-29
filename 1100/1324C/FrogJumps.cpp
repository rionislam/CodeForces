#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.length();

        int max = 0;
        int current = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='L'){
                current++;
            }else{
                if(current > max){
                    max = current;
                }
                current = 0;
            }
        }

        if(current > max){
            max = current;
        }

        cout<<max+1<<endl;
    }

    return 0;
}