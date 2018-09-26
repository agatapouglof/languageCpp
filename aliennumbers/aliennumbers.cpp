#include <bits/stdc++.h>
// aim : convert from an alien numerical system to another alien numerical system
//  strategy : convert to base 10 after convert to another alien system
using namespace std;

int main(){
  int cases,position;
  string res,alien_number,source_language,target_language;
  cin >> cases;
  for(int a=1; a<=cases; a++){
     res = "";
    cin >> alien_number >> source_language >> target_language;

    //  convert source to base 10
    int base10 = 0;
    int baseA  = source_language.length();
    int number_length = alien_number.length();
    // cout << number_length << endl;
    for(int i=number_length-1; i>=0; i--){
      position = source_language.find(alien_number[i]) * pow(baseA,(number_length-1 - i));
      base10 += position;
    }
    //  convert from base 10 to another alien base
    int baseB = target_language.length();
    position = base10;
    int rest;
    while(position > 0){
      rest =  position % baseB;
      position /= baseB;
      res = target_language[rest] + res;

    }
    cout << "Case #"<< a <<": "<< res << endl;
}
  return 0;
}
