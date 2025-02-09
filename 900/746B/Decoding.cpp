#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    string answer = "";

    if(n%2==0){
        for(int i=0; i<n; i++){
            if(i%2==0){
                answer = s[i]+answer;
            }else{
                answer += s[i];
            }
        }
    }else{
        for(int i=0; i<n; i++){
            if(i%2==1){
                answer = s[i]+answer;
            }else{
                answer += s[i];
            }
        }
    }

    cout<<answer<<endl;
}