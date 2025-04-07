#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int l,r;
        cin>>l>>r;
        int L, R;
        cin>>L>>R;

        if(r<L||R<l){
            cout<<1<<endl;
            continue;
        }

        if(r==L||l==R){
            cout<<2<<endl;
            continue;
        }

        if(l==L&&r==R){
            cout<<R-L<<endl;
            continue;
        }

        if(l==L){
            cout<<min(r, R)-l+1<<endl;
            continue;
        }

        if(r==R){
            cout<<r-max(l, L)+1<<endl;
            continue;
        }

        if((l>L&&r<R)||(L>l&&R<r)){
            cout<<min(r,R)-max(l, L)+2<<endl;
            continue;
        }

        if(L<r||l<R){
            cout<<min(r, R)-max(l, L)+2<<endl;
            continue;
        }
    }

    return 0;
}