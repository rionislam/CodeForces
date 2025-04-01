#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        pair<int, int> x[n]={{0, 0}};
        int minSecond = 1e9;
        int minSecondIndex = -1;

        for(int i=0; i<n; i++){
            int m;
            cin>>m;
            int a[m];

            for(int j=0; j<m; j++){
                cin>>a[j];
            }

            sort(a, a+m);

            x[i].first = a[0];
            x[i].second = a[1];

            if(a[1]<minSecond){
                minSecond = a[1];
                minSecondIndex = i;
            }
        }


        if(n==1){
            cout<<x[0].first<<endl;
            continue;
        }

        long long sum = 0;

        for(int i=0; i<n; i++){
            if(i!=minSecondIndex){
                sum += x[i].second;
                if(x[i].first<x[minSecondIndex].first){
                    x[minSecondIndex].first = x[i].first;
                }
            }
        }

        sum += x[minSecondIndex].first;

        cout<<sum<<endl;
    }

    return 0;
}