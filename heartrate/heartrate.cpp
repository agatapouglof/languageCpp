#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,b;
  double p,bpm,tmp;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> b;
    cin >> p;
    tmp = 60 / p;
    bpm = b/p * 60;
    cout << fixed;
    cout.precision(4);
    cout << bpm - tmp << " " ;
    cout << bpm << " " ;
    cout << bpm + tmp << endl;

  }
  return 0;
}
