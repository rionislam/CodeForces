#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t[n] = {0};
    int p=0,m=0,s=0;
    int w;
    for(int i=0; i<n; i++){
        cin>>t[i];
        if(t[i]==1){
            p++;
        }else if(t[i]==2){
            m++;
        }else{
            s++;
        }
    }

    if(p<=m&&p<=s){
        w=p;
    }else if(m<=p&&m<=s){
        w=m;
    }else{
        w=s;
    }

    cout<<w<<endl;
    int members[w][3] = {0};
    
    for(int i=0; i<n; i++){
        if(t[i]==1){
            for(int j=0; j<w; j++){
                if(members[j][0]==0){
                    members[j][0] = i+1;
                    break;
                }
            }
        }else if(t[i]==2){
            for(int j=0; j<w; j++){
                if(members[j][1]==0){
                    members[j][1] = i+1;
                    break;
                }
            }
        }else{
            for(int j=0; j<w; j++){
                if(members[j][2]==0){
                    members[j][2] = i+1;
                    break;
                }
            }
        }
    }

    for(int i=0; i<w; i++){
        cout<<members[i][0]<<' '<<members[i][1]<<' '<<members[i][2]<<endl;
    }

    return 0;
}