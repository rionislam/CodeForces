#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s1, s2;
        cin>>s1>>s2;

        string longestSubString = "";
        string currentSubString = "";

        for(int i=0; i<s1.length(); i++){
            for(int j=0; j<s2.length(); j++){
                if(s1[i]==s2[j]){
                    int x=i, y=j;
                    while(x<s1.length()&&y<s2.length()&&s1[x]==s2[y]){
                        currentSubString += s1[x];
                        x++;
                        y++;
                    }

                    if(currentSubString.length()>longestSubString.length()){
                        longestSubString = currentSubString;
                    }

                    currentSubString = "";
                }
            }
        }

        cout<<(s1.length()-longestSubString.length())+(s2.length()-longestSubString.length())<<endl;
    }
}