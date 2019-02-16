#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,m,tmp2,res;
  string text,tmp;
  vector<string> mots;
  std::map<string, int> dict;
  cin >> m >> n;
  for (int i = 0; i < m; i++) {
    cin >> tmp >> tmp2;
    dict[tmp] = tmp2;
  }
  getline(cin, text);
  for(int i=0; i<n; i++){
    getline(cin, text);
    res=0;
    while(text.compare(".") != 0){
      istringstream tokenStream(text);
      while (std::getline(tokenStream, tmp, ' ')){
         mots.push_back(tmp);
      }
      for(auto elt:mots){
        // cout << elt << endl;
        if(dict.find(elt) != dict.end()){
          res += dict[elt];
        }
      }
      getline(cin, text);
      mots.clear();
    }
    cout << res << endl;
  }

  return 0;
}
