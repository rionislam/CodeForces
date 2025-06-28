#include<iostream>
using namespace std;

int main(){
    int sum = 0;

    for(int i=0; i<5; i++){
        int c;
        cin>>c;
        sum += c;
    }


    if(sum%5 == 0 && sum != 0){
        cout<<sum/5<<endl;
    } else {
        cout<<-1<<endl;
    }

    return 0;
}