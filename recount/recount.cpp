#include "bits/stdc++.h"

using namespace std;

int main(){
  map<string , int> votes;
  string text;
  int maxi =0;
  string winner_name;
  while (getline(cin,text) && text.compare("***") != 0) {
    if(votes.find(text) == votes.end()){
      votes[text] = 1;
    }else{
      votes[text]++;
    }
    if(votes[text] > maxi ) maxi = votes[text];
  }
  int count_winners = 0;
  for(map<string , int>::iterator it=votes.begin(); it != votes.end(); ++it){
    if(it->second == maxi){
      count_winners++;
      winner_name = it->first;
    }
  }
  if(count_winners > 1) cout << "Runoff!" << endl;
  else cout << winner_name << endl;

  return 0;
}
