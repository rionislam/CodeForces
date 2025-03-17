#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r, d, u;
        cin>>l>>r>>d>>u;

        int d1 = sqrt(l*l+u*u);
        int d2 = sqrt(u*u+r*r);
        int d3 = sqrt(r*r+d*d);
        int d4 = sqrt(d*d+l*l);

        if (d1==d2&&d2==d3&&d3==d4&&l+r==d+u) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;;
        }
    }

    return 0;
}
