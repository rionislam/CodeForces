#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long min = 0;
        long long max = 0;

        if(n%2==0){
            min = n/6;
            if(n%6==4||n%6==2){
                min++;
            }
            max = n/4;
        }

        if(n%2==0&&n>=4){
            cout<<min<<" "<<max<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    

    return 0;
}