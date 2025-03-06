#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int capitalCount = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i]>='A'&&s[i]<='Z'){
            capitalCount++;
        }
    }
    

    if(capitalCount==s.length()||((capitalCount+1)==s.length()&&s[0]>='a'&&s[0]<='z')){
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i] = tolower(s[i]);
            }else{
                s[i] = toupper(s[i]);
            }
        }
    }
    
    cout<<s<<endl;

    return 0;
}