#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    int s[t][4];

    for(int i=0; i<t; i++){
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        for(int j=0; j<4; j++){
            cin>>s[i][j];
            if(s[i][j]>max1){
                max2=max1;
                max1=s[i][j];
            }else if(s[i][j]>max2){
                max2=s[i][j];
            }
        }
        int w1, w2;
        if(s[i][0]>s[i][1]){
            w1 = s[i][0];
        }else{
            w1 = s[i][1];
        }

        if(s[i][2]>s[i][3]){
            w2 = s[i][2];
        }else{
            w2 = s[i][3];
        }

        if((max1==w1 || max1==w2)&&(max2==w1||max2==w2)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}