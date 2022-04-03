#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  char lastChar = kingdom[kingdom.length()-1];
  char newChar = ::tolower(lastChar);
  string voy = "aeiuo";
  if(newChar == 'y') return "nobody";
  if(voy.find(newChar) != string::npos) return "Alice";
  else return "Bob";
  string ruler = "";
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
