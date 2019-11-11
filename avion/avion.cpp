#include <bits/stdc++.h>

using namespace std;

int main(){
    bool gotAway = true;
    string text,res;
    for(int i=1 ; i<= 5 ; i++){
        cin >> text;
        if(text.find("FBI") != string::npos){
            gotAway = false;
            cout << i << " ";

        }
    }
    if(gotAway) cout << "HE GOT AWAY!" ;
    cout << "\n";
    return 0;
}