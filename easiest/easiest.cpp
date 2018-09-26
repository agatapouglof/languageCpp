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
  int N,a=11,b,digits;
  cin >> N;
  while(N > 0){
    digits = sum_digits(N);
    b = sum_digits(a*N);
    while(b != digits){
      a++;
      b = sum_digits(a*N);
    }
    cout << a << endl;
    a=11;
    cin >> N;
  }
  return 0;
}
