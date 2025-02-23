#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
      int n;
      cin>>n;
      int a[n];
      for(int i=0; i<n; i++){
        cin>>a[i];
      }
      int ans = 2;
      if (is_sorted(a, a+n)){
        ans = 0;
      }else if (a[0] == 1 || a[n - 1] == n){
        ans = 1;
      }else if (a[0] == n && a[n - 1] == 1){
        ans = 3;
      }
        
      cout<<ans<<endl;
    }

    return 0;
  }