#include<iostream>
#include<cmath>

using namespace std;

int main(){
  double N;
  cin >> N;
  cout << fixed;
  cout.precision(6);

  cout << pow(N,1/N) <<endl;
}
