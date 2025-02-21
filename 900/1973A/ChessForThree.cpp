#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int p1, p2, p3;
        cin>>p1>>p2>>p3;

        if(p1==0&&p2==0&&p3==0){
            cout<<0<<endl;
            continue;
        }

        if((p1+p2+p3)%2==1){
            cout<<-1<<endl;
            continue;
        }

        cout<<min((p1+p2+p3)/2, p1+p2)<<endl;
    }

    return 0;
}