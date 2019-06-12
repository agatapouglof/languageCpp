#include "bits/stdc++.h"

using namespace std;

int main(){
  int cases,a,x;
  double b,y,area=0.0;
  cin >> cases;
  cin >> a >> b ;
  for (int i = 0; i < cases-1; i++) {
    cin >> x >> y;
    area += (b + y) / 2 * (x -a);
    // cout <<  area << endl;
    a = x;
    b = y;
    // cin >> x >> y
  }
  area /= 1000;
  // cout << fixed;
  // cout.precision(8);
  // cout <<  area << endl;
  if(floor(area) - area == 0){
    cout <<  area << endl;
  }else{
    printf("%.6f\n", area);
  }

  return 0;
}
// Before Score: 227.3 Rank: 1425
