// 26/05/2018
// Add Sub Mul
#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int A,B,res;
  cin >> A >> B;
  res = max(A+B,max(A-B,A*B));
  cout << res << endl;
  return 0;
}
