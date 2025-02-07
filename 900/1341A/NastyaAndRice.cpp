#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n, a, b, c, d;
        cin>>n>>a>>b>>c>>d;

        int maxWeightOfRice = (a+b);
        int minWeightOfRice = (a-b);
        int maxWeightOfPack = (c+d);
        int minWeightOfPack = (c-d);
        bool canMake = false;
        
        if (maxWeightOfRice * n >= minWeightOfPack && minWeightOfRice * n <= maxWeightOfPack) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}