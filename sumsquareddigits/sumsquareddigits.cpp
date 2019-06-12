#include "bits/stdc++.h"

using namespace std;

int main(){
  int cases, k,b,n;
  cin >> cases;
  while(cases--){
    cin >> k >> b >> n;
    int ssd =0;
    while(n > 0){
      ssd += (n % b) * (n % b);
      n /= b;
    }
    cout << k << " " << ssd << endl;

  }
  return 0;
}
// Before Score: 227.3Rank: 1425
// inspired from kantuni github I would not have done it so easily without this
// #understand
