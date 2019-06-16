#include "bits/stdc++.h"

using namespace std;

int main(){
  unsigned int res = 0;
  unsigned int a,b;

  while(true){
    cin >> a >> b;
    if(a==0 && b==0) break;
    res = a / b;
    a = a - (b*res);
    cout << res << " " << a << " " << "/" << " " << b <<endl;
  }
  return 0;
}
