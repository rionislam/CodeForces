#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    int a;
    cin>>s1>>s2;
    for(int i= 0; i<s1.size(); i++){
        char l1 = tolower(s1[i]);
        char l2 = tolower(s2[i]);

        if(l1 == l2){
            a = 0;
        }else if(l1<l2){
            a = -1;
            break;
        }else{
            a=1;
            break;
        }
    }

    cout<<a;
    return 0;
}