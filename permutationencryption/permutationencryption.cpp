#include<bits/stdc++.h>

using namespace std;

int main(){
  string res="",text;
  int n,j,add,index;
  unordered_map<int,int> key;
  while(true){
    cin >> n;
    if(n == 0) break;
    // read key in e.g (map [0]==>5)
    for(int i=0; i<n; i++){
      cin >> j;
      key[i] = j-1;// input start 1
    }
    cin.ignore(); // ignore endline \n for reading all line with getline
    getline(cin,text);

    (text.length() % n != 0) ? add = n - (text.length() % n) : add = 0;
    for(int i=1; i<=add; i++){
      text = text + " ";
    }
    for(int i=0; i< text.length(); i++){
      res = res + text[key[i]];
      key[i+n] = key[i] + n;
    }

  cout << "\'" << res << "\'" << endl;
  res ="";
  key.clear();

  }
  return 0;
}
