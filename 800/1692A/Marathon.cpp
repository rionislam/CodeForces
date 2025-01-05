#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c,d;
    while(n--){
        cin>>a>>b>>c>>d;
        int x =0;
        if(a<b){
            x++;
        }
        if(a<c){
            x++;
        }
        if(a<d){
            x++;
        }
        cout<<x<<endl;
    }
    return 0;

}