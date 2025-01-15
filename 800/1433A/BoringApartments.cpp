#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s[t];

    for(int i=0; i<t; i++){
        cin>>s[i];
    }

    for(int i=0; i<t; i++){
        int x = (int)s[i][0]-'0';
        int cycle = 4*(x-1)+s[i].length();
        int sum = 0;
        for(int j=1; j<=cycle; j++){
            if(j%4!=0){
                sum += j%4;
            }else{
                sum += 4;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}