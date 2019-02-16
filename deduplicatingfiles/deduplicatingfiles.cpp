#include<bits/stdc++.h>

using namespace std;

int main(){
  string text;
  vector<string> sents;
  std::map<int, int> hash; // hash_result ==> number of collision
  int res,nb_sents,collision=0,nb_files;
  cin >> nb_sents;
  nb_files = nb_sents;
  // while(nb_sents >0){
  //
  // }
  for (size_t i = 0; i < nb_sents; i++) {
    getline(cin,text);
    sents.push_back(text);
    for(int i=0; i<text.size(); i++){
      if(i==0){
        res = int(text[i]);
      }else{
        res = res xor int(text[i]);
      }
    }
      // cout << "text " << i << " " << text[i] ;
      // cout << " asci " <<  int(text[i]) << endl;
    // cout << " ascii xor " <<  res << endl;
    if(hash.find(res)){
      if(hash[res] > 0) hash[res] *= 2;
      else hash[res] = 1;
      collision += hash[res];
    }else{
      hash[res] = 0;
    }
  }
  cout <<
  return 0;
}
