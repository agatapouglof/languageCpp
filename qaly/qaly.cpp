// #include "../bits/stdc++.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
  int cases;
  double total=0.0,a,b;
  cin >> cases;
  for (int i = 0; i < cases; i++) {
    cin >> a >> b;
    total += a*b;

  }
  cout << total <<endl;
  return 0;
}
