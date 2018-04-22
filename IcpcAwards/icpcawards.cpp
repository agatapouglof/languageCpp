#include <iostream>
#include <string>
#include <set>
const int PRIMED_SCHOOLS = 12;
using namespace std;

int main (){
  set<string> schools;
  string univ,scl;
  string res_univ[12];
  string res_schools[12];
  int N;
  cin >> N;
  int j =0;
  int i =0;
  while(j < PRIMED_SCHOOLS){
    cin >> univ;
    cin >> scl;
    if(!schools.count(univ)){
      schools.insert(univ);
      res_univ[j] = univ;
      res_schools[j] = scl;
      j++;
    }
  }
  for(int i=0; i<PRIMED_SCHOOLS; i++){
    cout << res_univ[i] << " " << res_schools[i]<< endl;
  }
  return 0;
}
