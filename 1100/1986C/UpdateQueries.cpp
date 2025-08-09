#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        string s;
        cin>>s;

        int ind[m];

        for(int i=0; i<m; i++){
            cin>>ind[i];
        }

        string s1;
        cin>>s1;

        int a[m];

        for(int i=0; i<m; i++){
            a[i] = (int)s1[i];
        }

        sort(a, a+m);
        sort(ind, ind+m);

        
        
        int last = ind[0];
        s[(ind[0]-1)] = char(a[0]);
        
        int j = 1;
        for(int i=1; i<m; i++){
            if(last == ind[i]){
                continue;
            }
            s[(ind[i]-1)] = char(a[j]);
            last = ind[i];
            j++;
        }

        cout<<s<<endl;

    }

    return 0;
}