#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    int count = 0;

    while(n.size()>1){
        int sum = 0;
        for(char c:n){
            sum += c-'0';
        }
        n = to_string(sum);

        count++;
    }
    cout<<count<<endl;

    return 0;
}