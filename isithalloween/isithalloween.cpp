#include<bits/stdc++.h>

using namespace std;

int main(){
    string input;
    getline(cin,input);
    if((input.compare("OCT 31") == 0) || (input.compare("DEC 25") == 0) ){
        cout << "yup" << '\n';
    }else{
        cout << "nope" << '\n';
    }
    return 0;
}
