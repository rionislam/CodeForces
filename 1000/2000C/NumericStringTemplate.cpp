#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        pair<int, int> a[n];
        int b[n];
        
        for(int i=0; i<n; i++){
            cin>>a[i].first;
            b[i] = a[i].first;
            a[i].second = i;
        }
        
        
        sort(a, a+n);

        int m;
        cin>>m;
        string s[m];

        for(int i=0; i<m; i++){
            cin>>s[i];
            bool exist = false;
            if(s[i].length()==n){
                bool matches = true;
                for(int j=0; j<n-1; j++){
                    if(a[j].first==a[j+1].first&&s[i][a[j].second]!=s[i][a[j+1].second]){
                        matches = false;
                    }
                }

                int p[26] = {0};

                for(int j=0; j<n; j++){
                    if(p[s[i][j]-'a']!= 0&&b[j]!=b[p[s[i][j]-'a']-1]){
                        matches = false;
                    }
                    p[s[i][j]-'a'] = j+1;
                }

                if(matches){
                    exist = true;
                }
            }

            if(exist){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}