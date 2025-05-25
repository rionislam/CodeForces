#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int d[n];
        int l[n], r[n];
        bool continueFlag = false;

        for (int i = 0; i<n; i++) {
            cin>>d[i];
        }

        for (int i = 0; i<n; i++) {
            cin>>l[i]>>r[i];
        }

        int minH[n+1]={0}, maxH[n + 1]={0};
        
        for (int i = 0; i<n; i++) {
            long long preMinH = minH[i];
            long long preMaxH = maxH[i];
            int curD = d[i]; 
            long long curL = l[i]; 
            long long curR = r[i];

            long long achiveableMinH, achiveableMaxH;

            if (curD == 0) {
                achiveableMinH = preMinH;
                achiveableMaxH = preMaxH;
            } else if (curD == 1) {
                achiveableMinH = preMinH + 1;
                achiveableMaxH = preMaxH + 1;
            } else {
                achiveableMinH = preMinH;
                achiveableMaxH = preMaxH + 1;
            }

            minH[i+1] = max(achiveableMinH, curL);
            maxH[i+1] = min(achiveableMaxH, curR);

            if (minH[i+1] > maxH[i+1]) {
                cout<<-1<<endl;
                continueFlag = true;
                break;
            }
        }

        if(continueFlag) {
            continue;
        }

        int ans[n];
        long long hAtLast = maxH[n];

        for (int i = n - 1; i >= 0; --i) {
            int di = d[i]; 
            
            long long minHi = minH[i];
            long long maxHi = maxH[i];

            long long reqHiFor0 = hAtLast;
            bool can0 = false;
            if (di == 0 || di == -1) {
                if (minHi <= reqHiFor0 && reqHiFor0 <= maxHi) {
                    can0 = true;
                }
            }

            long long rewHiFor1 = hAtLast - 1;
            bool can1 = false;
            if (di == 1 || di == -1) {
                if (minHi <= rewHiFor1 && rewHiFor1 <= maxHi) {
                    can1 = true;
                }
            }
            
            if (di == 0) {
                ans[i] = 0;
                hAtLast = reqHiFor0;
            } else if (di == 1) {
                ans[i] = 1;
                hAtLast = rewHiFor1;
            } else {
                if (can0) {
                    ans[i] = 0;
                    hAtLast = reqHiFor0;
                } else {
                    ans[i] = 1;
                    hAtLast = rewHiFor1;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            cout<<ans[i]<<(i == n - 1 ? "" : " ");
        }
        
        cout<<endl;
    }
    return 0;
}