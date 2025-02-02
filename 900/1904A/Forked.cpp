#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin>>a>>b;
        int xk, yk;
        cin>>xk>>yk;
        int xq, yq;
        cin>>xq>>yq;

        if (a ==  b) {
            int k[4][2];
            int q[4][2];

            k[0][0] = xk + a; k[0][1] = yk + b;
            k[1][0] = xk + a; k[1][1] = yk - b;
            k[2][0] = xk - a; k[2][1] = yk + b;
            k[3][0] = xk - a; k[3][1] = yk - b;

            q[0][0] = xq + a; q[0][1] = yq + b;
            q[1][0] = xq + a; q[1][1] = yq - b;
            q[2][0] = xq - a; q[2][1] = yq + b;
            q[3][0] = xq - a; q[3][1] = yq - b;

            int count = 0;

            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (k[i][0] == q[j][0] && k[i][1] == q[j][1]) {
                        count++;
                    }
                }
            }

            cout<<count<<endl;
        } else {
            int k[8][2];
            int q[8][2];

            k[0][0] = xk + a; k[0][1] = yk + b;
            k[1][0] = xk + a; k[1][1] = yk - b;
            k[2][0] = xk - a; k[2][1] = yk + b;
            k[3][0] = xk - a; k[3][1] = yk - b;
            k[4][0] = xk + b; k[4][1] = yk + a;
            k[5][0] = xk + b; k[5][1] = yk - a;
            k[6][0] = xk - b; k[6][1] = yk + a;
            k[7][0] = xk - b; k[7][1] = yk - a;

            q[0][0] = xq + a; q[0][1] = yq + b;
            q[1][0] = xq + a; q[1][1] = yq - b;
            q[2][0] = xq - a; q[2][1] = yq + b;
            q[3][0] = xq - a; q[3][1] = yq - b;
            q[4][0] = xq + b; q[4][1] = yq + a;
            q[5][0] = xq + b; q[5][1] = yq - a;
            q[6][0] = xq - b; q[6][1] = yq + a;
            q[7][0] = xq - b; q[7][1] = yq - a;

            int count = 0;

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    if (k[i][0] == q[j][0] && k[i][1] == q[j][1]) {
                        count++;
                    }
                }
            }

            cout<<count<<endl;
        }
    }

    return 0;
}
