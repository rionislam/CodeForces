#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n, H, M;
        cin>>n>>H>> M;

        int minH=24, minM=60;

        for (int i=0; i<n; i++) {
            int h, m;
            cin>>h>>m;

            int total_given = h*60+m;
            int total_now = H*60+M;

            int diff = (total_given-total_now+1440)%1440;

            int diffH = diff/60;
            int diffM = diff%60;

            if (diffH<minH || (diffH==minH && diffM<minM)) {
                minH = diffH;
                minM = diffM;
            }
        }

        cout<<minH<<" "<<minM<<endl;
    }

    return 0;
}
