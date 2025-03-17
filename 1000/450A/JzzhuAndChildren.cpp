#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    int mostCircle = 0;
    int index = 0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        int y = x/m;
        if(x%m){
            y++;
        }
        if(y>=mostCircle){
            mostCircle = y;
            index = i;
        }
    }

    cout<<index+1<<endl;

    return 0;
}
