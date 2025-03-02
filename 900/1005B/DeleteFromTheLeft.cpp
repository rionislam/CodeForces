#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;

    int suffix_count = 0;

    int i = s1.length()-1;
    int j = s2.length()-1;

    while(true){
        if(i>=0&&j>=0&&s1[i]==s2[j]){
            suffix_count++;
            i--;
            j--;
        }else{
            break;
        } 
    }

    cout<<(s1.length()+s2.length())-2*suffix_count<<endl;

    return 0;
}