#include "bits/stdc++.h"

using namespace std;

int main(){
  string vowels = "aeiou";
  string coded = "";
  string res = "";
  getline(cin,coded);
  int i = 0;
  while(i < coded.length()){
    res += coded[i];
    if(coded.length() < 2) break;
      if(vowels.find(coded[i]) != string::npos){
        if(coded[i+1]== 'p' &&  coded[i+2] == coded[i]){
          i+=2;
        }
      }
      i++;
  }


  cout << res << endl;
  return 0;
}
