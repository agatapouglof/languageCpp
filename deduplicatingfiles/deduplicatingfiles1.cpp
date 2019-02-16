#include<bits/stdc++.h>

using namespace std;

int main(){
  string text;
  multimap<int, string> data;
  int res,nb_sents,collision=0,nb_files;
  cin >> nb_sents;
  while(nb_sents != 0){
    collision = 0;
    nb_files = nb_sents;
    bool same = false;

    getline(cin,text); // just to pass over  '\n'
    for (int i = 0; i < nb_sents; i++) {
      getline(cin,text);
      for(int i=0; i<text.size(); i++){
        if(i==0){
          res = int(text[i]);
        }else{
          res = res xor int(text[i]);
        }
      }

      pair <std::multimap<int,string>::iterator, std::multimap<int,string>::iterator> ret;
      ret = data.equal_range(res);
      same = false;
      for (multimap<int,string>::iterator it=ret.first; it!=ret.second; ++it){
        if(it->second.compare(text) != 0) {
          collision++;
        }else{
          same = true;
        }
      }
      if(same) nb_files--;
      data.insert({res, text });


    }
    data.clear();
    cout << nb_files << " " << collision << endl;
    cin >> nb_sents ;
  }
  return 0;
}
