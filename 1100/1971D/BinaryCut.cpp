#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int one = false;
        int zero = false;
        int zeroOne = false;
        int count = 1;

        for(int i=0; i<s.length(); i++){
            if(zero && one && s[i] == '0'){
                if(!zeroOne){
                    zeroOne = true;
                    count++;
                }else{
                    count += 2;
                }
                one = false;
            }else if(one && s[i] == '0'){
                zero = true;
                one = false;
                count++;
            }else if(s[i] == '1'){
                one = true;
            }else if(s[i] == '0'){
                zero = true;
            }
        }

        if(one && zero && count > 1 && zeroOne){
            count++;
        }

        cout<<count<<endl;
    }

    return 0;
}