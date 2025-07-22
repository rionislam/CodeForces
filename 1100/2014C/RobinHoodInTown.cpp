#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long a[n];
        long long sum = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }

        if(n < 3){
            cout<<-1<<endl;
            continue;
        }

        float avg = (float)sum / n;

        sort(a, a + n);

        if(a[((n+2)/2)-1] < avg/2){
            cout<<0<<endl;
            continue;
        }

        int i = ((n+2)/2)-1;

        cout<<(((a[i])*2*n)-sum)+1<<endl;

    }

    return 0;
}