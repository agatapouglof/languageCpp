#include "bits/stdc++.h"

using namespace std;


int main(){
    string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ '";
    string text;
    int cases;
    double res = 0.0;
    int pos_a, pos_b;
    cin >> cases;
    getline(cin,text);
    for(int i=0; i<cases; i++){
        getline(cin,text);

        res = 0.0;
        for(int j=0; j<text.length()-1; j++){
            pos_a = alph.find(text[j]);
            pos_b = alph.find(text[j+1]);
            res +=  min(abs(pos_a - pos_b), (28 - abs(pos_a - pos_b) )); 
        }
        res = res * M_PI / 7 + text.length();
        cout << fixed;
        cout.precision(10);
        cout << res << endl;
    }

    return 0;
}
