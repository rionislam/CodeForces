#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int one=0, two=0;
        while(n--){
            int a;
            cin>>a;
            if(a==1){
                one++;
            }else{
                two++;
            }
        };
        int totalSum = one + two * 2;

        if (totalSum % 2 != 0) {
            cout << "NO" << endl;
        } else if (one == 0 && two % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}