#include<bits/stdc++.h>

using namespace std;

int main(){
  int d;
  int x,n; // the number and the length(n)
  cin >> x >> n;
  d = (int)(pow(n,1.5) + x) % n;
  cout << "d : " << d << endl;

  return 0;
}
