/*
* points on dividing square
* calulate the number of points on the next line l(n+1) = l(n) + [l(n) - 1] = 2l(n) - 1
* multiply by the number of lines also  2l(n) - 1
*/
#include <iostream>

using namespace std;

int main(){
  int n,res,val=2;
  cin >> n;
  for(int i = 0 ;i<n; i++){
    val = 2 * val -1;
  }
  res = val * val;
  cout << res << endl;
  return 0;
}
