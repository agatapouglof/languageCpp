#include<iostream>

#include"bits/stdc++.h"

using namespace std;

int main(){

    string answers[3] =  {"ABC", "BABC", "CCAABB"};
    string names[3] =  {"Adrian", "Bruno", "Goran"};
    string text;
    int res[3]  = {0,0,0};
    int m=0;
    int maxi = 0;
    cin >> m;
    cin >> text;

    for(int j=0; j< 3; j++){
        int val = 0;
        int iterator = 0;
        for(int i=0; i< text.length(); i++){
            if(text[i] == answers[j][iterator]) val ++;
            iterator++ ;
            if(iterator >= answers[j].length()) iterator =0;     
        }
        if(val > maxi) maxi = val;
        res[j] = val;

    }
    cout << maxi << endl;
    for(int j=0; j<3 ; j++){
        if(res[j] ==  maxi) cout << names[j] << endl;
    }


    return 0;
}