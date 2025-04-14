#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        int c1=0, c2=0, c3=0;
        int cost = 0;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            if(a%3==0){
                c1++;
            }else if(a%3==1){
                c2++;
            }else{
                c3++;
            }
        }

        if(c1<(n/3)&&c3>(n/3)){
            if((c3-n/3)<=(n/3-c1)){
                cost += c3-n/3;
                c1 += c3-n/3;
                c3 -= c3-n/3;
            }else{
                cost += n/3-c1;
                c3 -= n/3-c1;
                c1 += n/3-c1;
            }
        }

        if(c1<(n/3)&&c2>(n/3)){
            if((c2-n/3)<=(n/3-c1)){
                cost += 2*(c2-n/3);
                c1 += c2-n/3;
                c2 -= c2-n/3;
            }else{
                cost += 2*(n/3-c1);
                c2 -= n/3-c1;
                c1 += n/3-c1;
            }
        }

        if(c2<(n/3)&&c1>(n/3)){
            if((c1-n/3)<=(n/3-c2)){
                cost += (c1-n/3);
                c2 += c1-n/3;
                c1 -= c1-n/3;
            }else{
                cost += n/3-c2;
                c1 -= n/3-c2;
                c2 += n/3-c2;
            }
        }

        if(c2<(n/3)&&c3>(n/3)){
            if((c3-n/3)<=(n/3-c2)){
                cost += 2*(c3-n/3);
                c2 += c3-n/3;
                c3 -= c3-n/3;
            }else{
                cost += 2*(n/3-c2);
                c3 -= n/2-c2;
                c2 += n/3-c2;
            }
        }

        if(c3<n/3&&c2>n/3){
            if((c2-n/3<=n/3-c3)){
                cost += c2-n/3;
                c3 += c2-n/3;
                c2 -= c2-n/3;
            }else{
                cost += n/3-c3;
                c2 -= n/3-c3;
                c3 += n/3-c3;
            }
        }

        if(c3<n/3&&c1>n/3){
            if((c1-n/3<=n/3-c3)){
                cost += 2*(c1-n/3);
                c3 += c1-n/3;
                c1 -= c1-n/3;
            }else{
                cost += 2*(n/3-c3);
                c1 -= n/3-c3;
                c3 += n/3-c3;
            }
        }
        cout<<cost<<endl;
    }

    return 0;
}