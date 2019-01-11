#include "../bits/stdc++.h"
// #include <bits/stdc++.h>

using namespace std;



int main() {
  double nt [5],val ;
  std::vector<double> vals;
  double a, b, c, nb;
  double d = 0.0;
  string st ="";
  int result=0;
  double demi;
  bool test = true;


cin >> nb ;
demi = nb/2.0;
// cout << demi << endl;
for (int i = 0; i <= nb; i++) {
  cin >> val;
  vals.push_back(val);
}
for (int i = 0; i < nb; i++) {
  if(vals[i] == vals[i+1] && vals[i] == demi) {
    cout << "INF" << endl;
    test =false;
    break;
  }else{
    if(vals[i] == demi) result--;
    if(vals[i] <= demi && vals[i+1] >= demi) {
      result++;
      // cout  <<"1" << endl;
      // cout  <<demi<< endl;
      cout <<"inf "<< vals[i] << endl;
      cout <<"sup "<< vals[i+1] << endl;
    }else{


      if(vals[i] >= demi && vals[i+1] <= demi) {
        result++;
        // cout << "2" << endl;
        // cout <<"inf "<< vals[i] << endl;
        // cout <<"sup" << vals[i+1] << endl;
      }
    }

  }

}
if(test)cout << result << endl;

  return 0;
}
