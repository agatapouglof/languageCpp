#include "bits/stdc++.h"


using namespace std;
map<string,string> dict;
bool to_read = true;
void read_input(string,string);
void translate(string);
int main() {
  string text,en_str,str;
  while (getline(cin ,text)) {
    if(text.empty()) {
      // cout << "is blank line\n";
      to_read = false;
      continue;
    }
    stringstream iss(text);
    iss >> en_str;
    if(to_read){
      iss >> str;
      read_input(en_str,str);
    }
    else{
      translate(en_str);
    }
  }
  return 0;
}

void read_input(string en_str, string  str){
  dict[str] = en_str;
}

void translate(string str){
  if(dict.find(str) == dict.end()) cout << "eh\n";
  else cout << dict[str] << endl;
}
