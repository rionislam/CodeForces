#include<iostream>
using namespace std;

int main(){
    string u;
    cin >> u;
    int c = 0;

    for (int i = 0; i < u.length(); i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (u[i] == u[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            c++;
        }
    }

    if (c % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
