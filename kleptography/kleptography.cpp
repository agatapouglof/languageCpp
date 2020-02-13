#include "bits/stdc++.h"

using namespace std;

int main(){
    string alph = "abcdefghijklmnopqrstuvwxyz";
    char input;
    while(true){
        cin >> input;
        
        cout << alph.find(input) << endl;
    }
    return 0;
}


