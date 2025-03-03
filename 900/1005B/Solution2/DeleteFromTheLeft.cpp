#include<iostream>
using namespace std;
 
int main(){
    string s1, s2;
    cin>>s1>>s2;
 
    int i=0, j=0;
    int count = 0;
    int equalCount = 0;
    int s1l = s1.length();
    int s2l = s2.length();
 
    if(s1l>s2l){
        count = s1l-s2l;
        i = count;
        for(int k=i; k<s1l; k++){
            if(s1[k]!=s2[j]){
                count += equalCount+2;
                equalCount = 0;
            }else{
                equalCount += 2;
            }
            j++;
        }
    }else if(s1l<s2l){
        count = s2l-s1l;
        j = count;
        for(int k=j; k<s2l; k++){
            if(s1[i]!=s2[k]){
                count += equalCount+2;
                equalCount = 0;
            }else{
                equalCount += 2;
            }
            i++;
        }
    }else{
        for(int k=0; k<s1.length(); k++){
            if(s1[k]!=s2[k]){
                count += equalCount+2;
                equalCount = 0;
            }else{
                equalCount += 2;
            }
        }
    }
 
    cout<<count<<endl;
 
    return 0;
}