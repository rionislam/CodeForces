#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count[5] = {0};

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        count[x]++;
    }

    int ans = count[4];

    int min3_1 = min(count[3], count[1]);
    ans += min3_1;
    count[3] -= min3_1;
    count[1] -= min3_1;

    ans += count[3];
    count[3] = 0;


    ans += count[2] / 2;
    count[2] %= 2;

    count[2] += count[1] / 2;
    count[1] %= 2;
    
    ans += count[2]/2;
    count[2] %= 2;
    ans += max(count[2], count[1]);
    count[2] = 0;
    count[1] = 0;
    

    cout<<ans<<endl;

    return 0;

}