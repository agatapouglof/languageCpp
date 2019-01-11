// #include "../bits/stdc++.h"
#include <bits/stdc++.h>

using namespace std;

int lastdigitfacto(int n){
  if(n==1) return 1;
  if(n==2) return 2;
  if(n==3) return 6;
  if(n==4) return 4;
  if(n==5) return 0;
  if(n==6) return 0;
  if(n==7) return 0;
  if(n==8) return 0;
  if(n==9) return 0;
  if(n==10) return 0;
  else return 1;
}

int main() {
  int cases;
  int a,b;
  cin >> cases;
  for (int i = 0; i < cases; i++) {
    cin >> a;
    cout << lastdigitfacto(a) << endl;

  }
  return 0;
}
