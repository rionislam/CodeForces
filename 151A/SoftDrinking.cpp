#include<iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totalPieces=c*d;
    int totalDrink=k*l;
    int numberOfTostForLemon = totalPieces/n;
    int numberOfTostForDrink = (totalDrink/nl)/n;
    int numberOfTostForSalt = (p/np)/n;
    if(numberOfTostForSalt<=numberOfTostForDrink && numberOfTostForSalt<=numberOfTostForLemon){
        cout<<numberOfTostForSalt;
    }else if(numberOfTostForDrink<=numberOfTostForSalt && numberOfTostForDrink<=numberOfTostForLemon){
        cout<<numberOfTostForDrink;
    }else{
        cout<<numberOfTostForLemon;
    }

    return 0;

}