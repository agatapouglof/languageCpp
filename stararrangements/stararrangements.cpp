#include<bits/stdc++.h>

using namespace std;

int main(){
  int S,x,y,res;
  cin >> S;
  cout << S <<":"<<endl;
  for (int i = 2; i < S/2+2; i++) {
    x = i ;
    y = x - 1;
    res = x + y;
    while(res < S){
      res += x ;
      if(res == S) break;
      res += y;
      if(res == S) break;
    }
    if(res ==  S){
      cout << x << "," << y << endl;
    }

    if(S%i == 0) cout << i <<"," << i <<endl;
  }
  return 0;
}
// Before Score: 230.0Rank: 1402
