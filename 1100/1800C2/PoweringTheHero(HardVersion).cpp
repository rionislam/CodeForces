#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        multiset<int> s;

        long long ans = 0;

        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            if(x != 0){
                s.insert(x);
            }else{
                if(!s.empty()){
                    int m = *s.rbegin();
                    ans += m;
                    s.erase(s.find(m));
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}