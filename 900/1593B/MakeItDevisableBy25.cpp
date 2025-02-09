#include<iostream>
using namespace std;

int solve(string n, char last){
    long long lastIndex = 1e9;
    long long answer = 1e9;
    for(int i=n.length()-1; i>=0; i--){
        if(lastIndex == 1e9 && n[i]==last){
            lastIndex=i;
        }else if(
            lastIndex!=1e9&&
            ((last=='5'&&(n[i]=='7'||n[i]=='2'))||
            (last=='0'&&(n[i]=='0'||n[i]=='5')))
        ){
            answer = n.length()-(lastIndex+1);
            answer += lastIndex-(i+1);
            return answer;
        }
    }
    return answer;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;
        int ans1 = solve(n, '5');
        int ans2 = solve(n, '0');

        cout<<min(ans1, ans2)<<endl;
    }

    return 0;
}