#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int N,res;
  float val,maxi = 0.0;
  float sum = 0;
  cin >> N;
  for(int i=0;i<N;i++){
   sum = 0.0;
    for(int j=0;j<3;j++){
      cin >> val;
      sum += val;
    }
    if(sum > maxi) maxi = sum;
  }
  res = ceil(maxi / 3) ;
  cout << res;
  return 0;
}
