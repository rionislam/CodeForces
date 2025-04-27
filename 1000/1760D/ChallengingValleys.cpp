#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a;


        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(i == 0 || x != a.back()){
                a.push_back(x);
            }
        }

        int count = 0;
        for(int i=0; i<a.size(); i++){
            if((i == 0 || a[i-1] > a[i]) && (i == a.size()-1 || a[i] < a[i+1]))
            {
                count++;
            }
        }

        if(count == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}