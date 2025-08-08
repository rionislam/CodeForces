#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        

        string arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        int last = stoi(arr[n-1]);
        bool possible = true;

        for(int i=n-2; i>=0; i--){
            if(!possible) break;

            if(stoi(arr[i]) <= last){
                last = stoi(arr[i]);
                continue;
            }

            string s = arr[i];
            int len = s.length();
            for(int i=len-1; i>=0; i--){
                if((s[i]-'0') > last){
                    possible = false;
                    break;
                }else{
                    last = s[i] - '0';
                }
            }
        }

        if(possible)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}