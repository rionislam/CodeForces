#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s[n];
        unordered_set<string> a;
        for(int i=0; i<n; i++){
            cin>>s[i];
            a.insert(s[i]);
        }

        for(int i=0; i<n; i++){
            if(s[i].length()==1){
                cout<<0;
                continue;
            }
            bool found = false;
            for(int j=1; j<s[i].length(); j++){
                if(a.count(s[i].substr(0, j))&&a.count(s[i].substr(j))){
                    found = true;
                    break;
                }
            }
            if(found){
                cout<<1;
            }else{
                cout<<0;
            }
        }

        cout<<endl;
    }

    return 0;
}