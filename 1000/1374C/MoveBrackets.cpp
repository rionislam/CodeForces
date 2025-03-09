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
        int openBracketsFromLeft = 0;
        int openBracketsFromRight = 0;

        int rightFaced = 0;
        int leftFaced = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                rightFaced++;
            }else{
                if(rightFaced!=0){
                    rightFaced--;
                }else{
                    leftFaced++;
                }
            }
        }
        openBracketsFromLeft = leftFaced;

        rightFaced = 0;
        leftFaced = 0;

        for(int i=n-1; i>0; i--){
            if(s[i]==')'){
                leftFaced++;
            }else{
                if(leftFaced!=0){
                    leftFaced--;
                }else{
                    rightFaced++;
                }
            }
        }
        openBracketsFromRight = rightFaced;

        cout<<min(openBracketsFromLeft, openBracketsFromRight)<<endl;

    }

    return 0;
}
