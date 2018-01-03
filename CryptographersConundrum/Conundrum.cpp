#include<iostream>
#include<string>
using namespace std;

int main(){
    int val,i=0,count=0;
    string phrase;
    cin >> phrase;
    for(i;i<phrase.length();i++){
        val = i % 3;
        if(val ==0 ){
            if(phrase[i] != 'P') count++;
        }else{
            if(val == 1){
                if(phrase[i] != 'E') count ++;
            }else{
                if(val == 2 ){
                if(phrase[i] != 'R') count ++;
                }
            }
        }

    }
    cout << count << endl;
    return 0;
}
