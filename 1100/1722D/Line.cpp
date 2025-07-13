#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        long long sum = 0;

        for(int i=0; i<n; i++){
            if(s[i] == 'L'){
                sum += i;
            }else{
                sum += n-i-1;
            }
        }

        long long mx = sum;

        int i = 0, j = n-1;
        for(int k=0; k<n; k++){
            while(s[i] == 'R' && i < n/2){
                i++;
            }

            while(s[j] == 'L' && j >= n/2){
                j--;
            }

            int gainForFlipL = (n-i-1)-i;
            int gainForFlipR = j-(n-j-1);

            if(gainForFlipL > gainForFlipR){
                sum += gainForFlipL;
                s[i] = 'R';
                i++;
            }else if(gainForFlipR > gainForFlipL){
                sum += gainForFlipR;
                s[j] = 'L';
                j--;
            }else{
                sum += gainForFlipL;
                s[i] = 'R';
                i++;
            }   

            mx = max(mx, sum);
            cout<<mx<<" ";
        }

        cout<<endl;
    }

    return 0;
}