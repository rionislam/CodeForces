#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n-1];
    int c[n-2];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++){
        cin>>b[i];
    }
    for(int i=0; i<n-2; i++){
        cin>>c[i];
    }

    sort(a, a+n);
    sort(b, b+(n-1));
    sort(c, c+(n-2));

    int x = 0, y = 0, z = 0;

    int ans1 = 0, ans2 = 0;

    while(x < n){
        if(y == (n-1) || a[x] != b[y]){
            ans1 = a[x];
            break;
        }
        x++;
        y++;
    }

    y = 0;
    while(y < (n-1)){
        if(z == (n-2) || b[y] != c[z]){
            ans2 = b[y];
            break;
        }
        y++;
        z++;
    }

    cout<<ans1<<endl;
    cout<<ans2<<endl;

    return 0;
}