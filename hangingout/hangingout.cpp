#include "bits/stdc++.h"

using namespace std;

int main(){
  int limit,nb_events,nb_people = 0, nb_group,refused=0;
  string text;
  cin >> limit >> nb_events ;
  for (int i = 0; i < nb_events; i++) {
    cin >> text >> nb_group;
    if(text.compare("leave") == 0) nb_people -= nb_group;
    if(text.compare("enter") == 0){
      if(nb_group + nb_people <= limit){
        nb_people += nb_group;
      }else{
        refused++;
      }
    }
  }
  cout << refused << endl;
  return 0;
}
// points before 226.1
// Rank before 1437
