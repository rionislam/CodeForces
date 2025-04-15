#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int count[26]={0};
        int COUNT[26]={0};

        for(int i=0; i<n; i++){
            if(isupper(s[i])){
                COUNT[s[i]-'A']++;
            }else{
                count[s[i]-'a']++;
            }
        }

        int earning = 0;
        for(int i=0; i<26; i++){
            if(count[i]>0||COUNT[i]>0){
                earning += min(count[i], COUNT[i]);

                if(k>0){
                    earning += min(k, abs(count[i]-COUNT[i])/2);
                    k -= min(k, abs(count[i]-COUNT[i])/2);
                }
            }
        }

        cout<<earning<<endl;
    }

    return 0;
}