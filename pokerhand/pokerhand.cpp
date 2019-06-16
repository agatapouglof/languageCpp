#include "bits/stdc++.h"

using namespace std;

int main(){
  int res = 0;
  string a;
  char ch;
  map<char,int> ranks = { {'A',0},{'2',0},{'3',0},{'4',0},{'5',0},{'6',0},{'7',0},{'8',0},{'9',0},{'T',0},{'J',0},{'Q',0},{'K',0} };
  int step = 5;
  while(step--){
    cin >> a;
    ch = a[0];
    ranks[ch]++;
    if(ranks[ch] > res) res = ranks[ch];
  }
  cout << res << endl;

  return 0;
}
