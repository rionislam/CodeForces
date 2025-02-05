#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int s;
        cin>>s;
        int spend = 0;
        int remaining = 0;
        spend = s-(s%10);
        remaining = s%10+(spend/10);
        while(remaining>=10){
            spend += remaining-(remaining%10);
            remaining = remaining%10+(remaining-(remaining%10))/10;
        }
        spend += remaining;
        cout<<spend<<endl;
    }

    return 0;
}