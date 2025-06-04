#include <iostream>
#include <algorithm> 
using namespace std;


int calculateOneDimG(long long k) {
    if (k <= 1) {
        return 0;
    }
    int turns = 0;
    long long p = 1;
    while (p < k) {
        p *= 2;
        turns++;
    }
    return turns;
}


int calculateG(long long n, long long m) {
    return calculateOneDimG(n) + calculateOneDimG(m);
}


const int PRACTICAL_INFINITY_COST = 200; 


int main() {
    int t;
    cin>>t;

    while (t--) {
        long long N, M, initA, initB;
        cin>>N>>M>>initA>>initB;

        if (N == 1 && M == 1) {
            cout<<0<<endl;
            continue;
        }

        int minGAfterHCut = PRACTICAL_INFINITY_COST;
        if (N > 1) { 
            int h1G = PRACTICAL_INFINITY_COST;
            long long h1 = initA; 
            if (h1 < N) { 
                h1G = calculateG(h1, M);
            }
            
            int h2G = PRACTICAL_INFINITY_COST;
            long long h2 = N - initA + 1; 
            if (h2 < N) { 
                h2G = calculateG(h2, M);
            }
            minGAfterHCut = min(h1G, h2G);
        }

        int minGAfterXCut = PRACTICAL_INFINITY_COST;
        if (M > 1) { 
            int g1 = PRACTICAL_INFINITY_COST;
            long long x1 = initB; 
            if (x1 < M) { 
                g1 = calculateG(N, x1);
            }
            
            int g2 = PRACTICAL_INFINITY_COST;
            long long x2 = M - initB + 1; 
            if (x2 < M) { 
                g2 = calculateG(N, x2);
            }
            minGAfterXCut = min(g1, g2);
        }
        
        
        cout<< 1 + min(minGAfterHCut, minGAfterXCut) <<endl;
    }

    return 0;
}