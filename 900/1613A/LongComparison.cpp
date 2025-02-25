#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string x1;
        int p1;
        cin>>x1>>p1;
        string x2;
        int p2;
        cin>>x2>>p2;

        long long x1l = x1.length()+p1;
        long long x2l = x2.length()+p2;

        if(x1l>x2l){
            cout<<">"<<endl;
        }else if(x1l<x2l){
            cout<<"<"<<endl;
        }else if(x1l==x2l){
            long long x1p = stoi(x1);
            long long x2p = stoi(x2);
            if(x1.length()>x2.length()){
                x2p *= pow(10, (x1.length()-x2.length()));
            }else if(x1.length()<x2.length()){
                x1p *= pow(10, (x2.length()-x1.length()));
            }
            if(x1p>x2p){
                cout<<">"<<endl;
            }else if(x1p<x2p){
                cout<<"<"<<endl;
            }else if(x1p==x2p){
                cout<<"="<<endl;
            }
        }
        
    }

    return 0;
}