#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m, k;
        cin>>n>>m>>k;

        int maxCards = n/k;
        int maxJoker;
        if(maxCards>m){
            maxJoker = m;
        }else{
            maxJoker = maxCards;
        }

        int maxJokersToOthers = (m-maxJoker)/(k-1);

        if((m-maxJoker)%(k-1)){
            maxJokersToOthers++;
        }
        
        cout<<maxJoker-maxJokersToOthers<<endl;
    }
    return 0;
}