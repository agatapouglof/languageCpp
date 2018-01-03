#include<iostream>
#include<string>
using namespace std;
int move(int val,char lettre){
    if(lettre == 'A'){
        if(val == 1) return 2;
        if(val==  2) return 1;
        else return val;
    }else{
        if(lettre == 'B'){
            if(val == 2) return 3;
            if (val == 3) return 2;
            else return val;
        }else{
            if(lettre == 'C'){
                if(val == 1) return 3;
                if(val == 3) return 1;
                else return val;
            }
        }
    }
}
int main(){
    int i =0,res=1;
    string phrase;
    cin >> phrase;
    for(i;i<phrase.length();i++){
        res = move(res,phrase[i]);
    }
cout << res << endl;
    return 0;
}
