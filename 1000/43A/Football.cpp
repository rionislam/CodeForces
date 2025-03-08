#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    string team[2]={""};
    int score[2]={0};

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s==team[0]||team[0]==""){
            if(team[0]==""){
                team[0]=s;
            }
            score[0]++;
        }else{
            if(team[1]==""){
                team[1]=s;
            }
            score[1]++;
        }
    }

    if(score[0]>score[1]){
        cout<<team[0]<<endl;
    }else{
        cout<<team[1]<<endl;
    }

    return 0;
}