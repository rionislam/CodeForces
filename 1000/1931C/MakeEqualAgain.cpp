#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int count = 1;

        if(a[0]==a[n-1]){
            int iterations = 1;
            int num = a[0];
            for(int i=1; i<n; i++){
                if(num==a[i]){
                    iterations++;
                    count++;
                }else{
                    break;
                }
            }

            for(int i=n-1; i>iterations; i--){
                if(num==a[i]){
                    count++;
                }else{
                    break;
                }
            }
            
        }else{
            int left = 1;
            int right = 1;
            for(int i=1; i<n; i++){
                if(a[i]==a[0]){
                    left++;
                }else{
                    break;
                }
            }

            for(int i=n-2; i>0; i--){
                if(a[i]==a[n-1]){
                    right++;
                }else{
                    break;
                }
            }

            count = max(left, right);
        }

        cout<<n-count<<endl;


        //If there was no limit of how many operations can be done. Then the answer is bellow

        // int lngstMtcinSegSize = 1;
        // int lngstMtcinSegNum = a[0];
        // int lngstMtcinSegStart = 0;
        // int lngstMtcinSegEnd = 0;
        // int crntSegSize = 1;
        // int lastNum = a[0];
        // int crntSegStart = 0;
        // int crntSegEnd = 0;
        // int addition = 0;
        // for(int i=1; i<n; i++){
        //     if(lastNum == a[i]){
        //         crntSegSize++;
        //         crntSegEnd = i;
        //     }else{
        //         if(crntSegSize>=lngstMtcinSegSize){
        //             lngstMtcinSegSize = crntSegSize;
        //             crntSegSize = 1;
        //             lngstMtcinSegNum = lastNum;
        //             lngstMtcinSegStart = crntSegStart;
        //             lngstMtcinSegEnd = crntSegEnd;
        //         }
        //         lastNum = a[i];
        //         crntSegStart = i;
        //         crntSegEnd = i;
        //     }
        // }

        // if(crntSegSize>=lngstMtcinSegSize){
        //     lngstMtcinSegSize = crntSegSize;
        //     lngstMtcinSegNum = lastNum;
        //     lngstMtcinSegStart = crntSegStart;
        //     lngstMtcinSegEnd = crntSegEnd;
        // }

        // crntSegSize = 1;
        // lastNum = a[0];
        // for(int i=1; i<n; i++){
        //     if(lastNum == a[i]){
        //         crntSegSize++;
        //     }else{
        //         if(lastNum == lngstMtcinSegNum && ((i-1)<lngstMtcinSegStart||(i-1)>lngstMtcinSegEnd) && (crntSegSize>1||i==1)){
        //             lngstMtcinSegSize += crntSegSize;
        //         }

        //         if(lastNum == lngstMtcinSegNum && i!=crntSegSize && crntSegSize>1){
        //             addition++;
        //         }

        //         crntSegSize = 1;
        //         lastNum = a[i];
        //     }
        // }

        // if(lastNum == lngstMtcinSegNum && ((n-1)>lngstMtcinSegEnd)){
        //     lngstMtcinSegSize += crntSegSize;
        // }

        // cout<<n-lngstMtcinSegSize+addition<<endl;

    }

    return 0;
}