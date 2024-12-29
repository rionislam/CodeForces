#include<iostream>
using namespace std;

int main(){
    string guest, host, letters;
    cin>>guest>>host>>letters;
    int lettersCount[26]={0}, combined[26]={0};
    for(int i=0; i<guest.length(); i++){
        combined[guest[i]-'A']++;
    }
    for(int i=0; i<host.length(); i++){
        combined[host[i]-'A']++;
    }
    for(int i=0; i<letters.length(); i++){
        lettersCount[letters[i]-'A']++;
    }

    for(int i=0; i<26; i++){
        if(lettersCount[i] != combined[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}