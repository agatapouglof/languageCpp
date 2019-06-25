#include "bits/stdc++.h"

using namespace std;


int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a == b + c){ cout << a << "=" << b << "+" << c << endl; return 0;}
  if(a == b - c){ cout << a << "=" << b << "-" << c << endl; return 0;}
  if(a == b * c){ cout << a << "=" << b << "*" << c << endl; return 0;}
  if(float(a) == float(b) / float(c)){ cout << a << "=" << b << "/" << c << endl; return 0;}

  if(a + b == c){ cout << a << "+" << b << "=" << c << endl; return 0;}
  if(a - b == c){ cout << a << "-" << b << "=" << c << endl; return 0;}
  if(a * b == c){ cout << a << "*" << b << "=" << c << endl; return 0;}
  if(float(a) / float(b) == float(c)){ cout << a << "/" << b << "=" << c << endl; return 0;}
  return 0;
}
