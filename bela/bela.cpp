#include<iostream>
#include<string>
/*
 * thank you map data struct your save my time 
 * lol problem hard to explane
 * but add cards in function of dominance of the suit
 *
 * */
#include<map>
using namespace std;
int main (){
    map <char,int> Notdominant;
    Notdominant['A'] = 11;
    Notdominant['K'] = 4;
    Notdominant['Q'] = 3;
    Notdominant['J'] = 2;
    Notdominant['T'] = 10;
    Notdominant['9'] = 0;
    Notdominant['8'] = 0;
    Notdominant['7'] = 0;
    map <char,int> dominant;
    dominant['A'] = 11;
    dominant['K'] = 4;
    dominant['Q'] = 3;
    dominant['J'] = 20;
    dominant['T'] = 10;
    dominant['9'] = 14;
    dominant['8'] = 0;
    dominant['7'] = 0;
    int cases,sum=0,i=0;
    string val;
    char dom;
    cin >> cases >> dom;
    cases *=4;
    for(i;i<cases;i++){
        cin >> val;
        if(val[1] == dom){
            sum += dominant[val[0]];
        }else{
            sum += Notdominant[val[0]];
        }
    }
    cout << sum <<   endl;
    return 0;
        
}
