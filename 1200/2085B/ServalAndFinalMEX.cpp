#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        int a[n];
        int zeros = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==0){
                zeros++;
            }
        }

        if(zeros==0){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
            continue;
        }

        if(a[0]!=0){
            cout<<2<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            continue;
        }

        if(a[0]==0 && zeros == 1){
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<n-1<<endl;
            continue;
        }

        if(a[0]==0 && zeros > 1){
            if(a[1]==0 && zeros == 2){
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<1<<" "<<n-1<<endl;
                continue;
            }else{
                cout<<3<<endl;
                cout<<3<<" "<<n<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<1<<" "<<2<<endl;
                continue;
            }
        }


    }
    return 0;
}
