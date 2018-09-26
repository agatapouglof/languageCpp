#include<bits/stdc++.h>

using namespace std;

struct logi{
  int tmp;
  char problem;
  string result;
};
int main(){
  int total = 0, a = 1,nb_problems=0;
  logi elt;
  vector<logi> logs;
  map <char, int> errors;
  cin >> a;
  while(a != -1){
      elt.tmp = a;
      cin >> elt.problem ;
      cin >> elt.result ;
      logs.push_back(elt);
      if(elt.result == "right"){
        nb_problems++;
        total += elt.tmp;
        if(errors.count(elt.problem) > 0){
          total += errors[elt.problem];
        }
      }else{
          if (errors.count(elt.problem) > 0)  errors[elt.problem] += 20;
          else errors[elt.problem] = 20;
      }
      cin >> a;
  }
  cout << nb_problems << " ";
  cout << total << endl;
  return 0;
}
