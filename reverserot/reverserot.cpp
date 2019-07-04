#include "bits/stdc++.h"


using namespace std;

int main(){
  string ALPHABET =  "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
  string text,res="";
  int newindex, rot = 1;
  while(true){
    cin >> rot;
    cin >> text;
    if(rot == 0 && !text.empty()) break;
    reverse(text.begin(), text.end());
    for (int i = 0; i < text.length(); i++) {
      int actualindex = ALPHABET.find(text[i]);
      newindex = (actualindex + rot) % 28;
      res += ALPHABET[newindex];
    }
    cout << res << endl;
    res.clear();
  }
  return 0;
}
