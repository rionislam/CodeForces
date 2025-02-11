#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int l, r, a;
        cin>>l>>r>>a;

        int best = (r/a)+(r%a);
        int x = r-(r%a)-1;

        if (x >= l) {
            best = max(best, (x/a)+(x%a));
        }

        cout<<best<<endl;
    }

    return 0;
}
