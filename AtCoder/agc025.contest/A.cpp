// 3/06/2018
#include<bits/stdc++.h>

using namespace std;
//  return sum of digits of a  number
int sum_digits(int number){
  int sum = 0;
  char nb;
while(number>0){
  sum += number % 10;
  number /= 10;
}
  return sum;
}
int main(){
  int N,a,b,digits,res;
  cin >> N;
  b = 1;
  N -= 1;
  res = sum_digits(N) + sum_digits(b);
  while(N > 1){
    b++;
    N--;
    digits = sum_digits(N) + sum_digits(b);
    res = min(digits,res);
  }
  cout << res << endl;
  return 0;
}
