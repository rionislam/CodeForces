#include<iostream>
using namespace std;

int main(){
    int p, q;
    cin>>p>>q;
    bool x = false;
    for(int i = 1; i<=p; i++){
        for(int j = 1; j<=q; j++){
            if(i%2==0){
                if(j == q && x){
                    cout<<'#';
                }else if(j == 1 && !x){
                    cout<<'#';
                }else{
                    cout<<'.';
                }
            }else{
                cout<<'#';
            }
        }
        if(i%2!=0){
            if(x==true){
                    x=false;
                }else{
                    x=true;
                }
        }
        cout<<"\n";
    }

    return 0;
}