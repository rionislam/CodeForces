#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int l[n];

    for(int i=0; i<n; i++){
        cin>>l[i];
    }

    sort(l, l+n);

    int last = l[0];
    int count = 1;
    int size = 1;
    int biggest = 1;

    for(int i=1; i<n; i++){
        if(last!=l[i]){
            count++;
            last = l[i];
            if(size>biggest){
                biggest = size;
            }
            size = 1;
        }else{
            size++;
        }
    }

    if(size>biggest){
        biggest = size;
    }

    cout<<biggest<<" "<<count<<endl;

    return 0;
}