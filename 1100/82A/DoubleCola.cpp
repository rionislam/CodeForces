#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int p = 0;
    long long sum = 0;
    while(true){
        if((sum + 5*pow(2, p))>n){
            break;
        }
        sum += 5*pow(2, p);
        p++;
    }
    
    int ans = (n-sum);
     
    if(ans == 0){  
        cout<<"Howard"<<endl;
    }else if(ans <= pow(2, p)){
        cout<<"Sheldon"<<endl;
    }else if(ans <= 2*pow(2, p)){
        cout<<"Leonard"<<endl;
    }else if(ans <= 3*pow(2, p)){
        cout<<"Penny"<<endl;
    }else if(ans <= 4*pow(2, p)){
        cout<<"Rajesh"<<endl;
    }else if(ans <= 5*pow(2, p)){
        cout<<"Howard"<<endl;
    }

    return 0;
}