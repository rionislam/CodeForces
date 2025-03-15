#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    string a[m];
    string b[m];
    string ans = "";

    for(int i=0; i<m; i++){
        cin>>a[i]>>b[i];
    }

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        int pos = 0;
        for (int j = 0; j < m; j++) {
            if (a[j] == s){
                pos = j;
                break;
            } 
        }
        if(s.length()<=b[pos].length()){
            ans += s;
        }else{
            ans += b[pos];
        }

        if(i<(n-1)){
            ans += " ";
        }
    }

    cout<<ans<<endl;

    return 0;
}