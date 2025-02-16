/* Because 0 is also a number of the sequence.
We can just print 0 0 n if the n is also 
a number of the sequence */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0;
    int y=1;
    int z=0;
    bool exists = true;
    
    while(z<n){
        if(z=n){
            break;
        }
        z=x+y;
        x=y;
        y=z;

        if(z>x){
            exists = false;
        }
    }

    if(exists){
        cout<<0<<" "<<0<<" "<<n<<endl;
    }else{
        cout<<"I'm too stupid to solve this problem"<<endl;
    }

    return 0;
}