#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    sort(x, x+n);

    int q;
    cin>>q;

    for(int i=0; i<q; i++){
        int m;
        cin>>m;

        if(m >= x[n-1]){
            cout<<n<<endl;
        }else{
            int left = 0, right = n-1;
            int res = 0;
            while (left <= right) {
                int mid = (left + right) / 2;
        
                if (x[mid] <= m) {
                    res = mid + 1;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

            cout<<res<<endl;
        }
    }

    return 0;
}
