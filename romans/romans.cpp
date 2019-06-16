#include "bits/stdc++.h"

using namespace std;

int main(){
  double x;
  double cst = (1000.0 * 5280.0 / 4854.0);
  int res;
  cin >> x;
  res = round( cst * x );
  cout << res <<endl;
  return 0;
}
