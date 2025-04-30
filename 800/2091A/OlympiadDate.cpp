#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int zero = 3;
        int one = 1;
        int two = 2;
        int three = 1;
        int five = 1;
        int i = 0;
        int ans = 0;

        while(n-i>0){
            i++;
            int x;
            cin>>x;
            if(x == 0){
                if(zero>0)
                zero--;
            }else if(x == 1){
                if(one>0)
                one--;
            }else if(x == 2){
                if(two>0)
                two--;
            }else if(x == 3){
                if(three>0)
                three--;
            }else if(x == 5){
                if(five>0)
                five--;
            }

            if(zero==0&&one==0&&two==0&&three==0&&five==0&&ans==0){
                ans = i;
            }
        }
        cout<<ans<<endl;
    }
    

    return 0;
}