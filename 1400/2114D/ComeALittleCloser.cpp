#include <iostream>
#include <climits>
using namespace std;

long long calcArea(long long width, long long height) {
    if (width <= 0 || height <= 0) {
        return LLONG_MAX;
    }
    return width * height;
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin >> n;
        long long x[n], y[n];

        for (int i = 0; i < n; i++) {
            cin>>x[i]>>y[i];
        }

        if (n == 0) {
            cout<<0<<endl;
            continue;
        }

        if (n == 1) {
            cout<<1<< endl;
            continue;
        }

        long long minX = x[0], maxX = x[0];
        long long minY = y[0], maxY = y[0];

        for (int i = 1; i < n; i++) {
            minX = min(minX, x[i]);
            maxX = max(maxX, x[i]);
            minY = min(minY, y[i]);
            maxY = max(maxY, y[i]);
        }
        long long cost = calcArea(maxX - minX + 1, maxY - minY + 1);

        int minXNum = 0, maxXNum = 0;
        int minYNum = 0, maxYNum = 0;

        long long secondMinX = LLONG_MAX, secondMaxX = LLONG_MIN;
        long long secondMinY = LLONG_MAX, secondMaxY = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            if (x[i] == minX) 
                minXNum++;

            if (x[i] == maxX) 
                maxXNum++;

            if (y[i] == minY) 
                minYNum++;

            if (y[i] == maxY) 
                maxYNum++;


            if (x[i] > minX) 
                secondMinX = min(secondMinX, x[i]);

            if (x[i] < maxX) 
                secondMaxX = max(secondMaxX, x[i]);

            if (y[i] > minY) 
                secondMinY = min(secondMinY, y[i]);
                
            if (y[i] < maxY) 
                secondMaxY = max(secondMaxY, y[i]);
        }

        for (int i = 0; i < n; i++) {
            long long currentMinX = minX;
            long long currentMaxX = maxX;
            long long currentMinY = minY;
            long long currentMaxY = maxY;
            
            bool isUnique = false;

            if (x[i] == minX && minXNum == 1) {
                currentMinX = secondMinX;
                isUnique = true;
            }
            if (x[i] == maxX && maxXNum == 1) {
                currentMaxX = secondMaxX;
                isUnique = true;
            }
            if (y[i] == minY && minYNum == 1) {
                currentMinY = secondMinY;
                isUnique = true;
            }
            if (y[i] == maxY && maxYNum == 1) {
                currentMaxY = secondMaxY;
                isUnique = true;
            }

            long long W, H;
            if (currentMinX > currentMaxX || currentMinY > currentMaxY) {
                 W = (currentMinX <= currentMaxX) ? (currentMaxX - currentMinX + 1) : 0;
                 H = (currentMinY <= currentMaxY) ? (currentMaxY - currentMinY + 1) : 0;
            } else {
                 W = currentMaxX - currentMinX + 1;
                 H = currentMaxY - currentMinY + 1;
            }


            if (W == 0 || H == 0) { 
                 if (n == 2 && isUnique) { 
                    cost = min(cost, 1LL);
                 }
                 continue;
            }


            long long area = calcArea(W, H);
            long long expandWCost = calcArea(W + 1, H);
            long long expandHCost = calcArea(W, H + 1);

            if (area != LLONG_MAX) {
                if (isUnique && (W * H == n - 1 && n - 1 > 0) ) {
                    cost = min(cost, expandWCost);
                    cost = min(cost, expandHCost);
                } else {
                    cost = min(cost, area);
                }
            } 
        }

        cout<<cost<<endl;
    }
    return 0;
}