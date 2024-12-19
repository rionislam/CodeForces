#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,h=0,hi=0,l=INT_MAX,li=0,s=0;
    cin>>n;
    int heights[n];
    for(int i = 0; i<n; i++){
        cin>>heights[i];
        if(heights[i]>h){
            h=heights[i];
            hi=i;
        }
        if(heights[i]<=l){
            l=heights[i];
            li=i;
        }
    }

    s += hi;
    if(hi>li){
        s+=(n-1-li-1);
    }else{
        s+=(n-1-li);
    }
        
    cout<<s;
    return 0;


}