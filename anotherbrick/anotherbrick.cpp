#include<bits/stdc++.h>

using namespace std;

int main() {
  int h,w,n,tmp;
  int total_bricks = 0, brique = 0;
  vector<int> bricks;
  bool res = true;
  cin >> h >> w >> n;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    bricks.push_back(tmp);
  }
  for (int j = 0; j < h; j++) {
    while (total_bricks < w && brique < n) {
      total_bricks += bricks[brique];
      brique++;
    }
    if(total_bricks > w || brique > n){
      res=false;
      break;
    }
    total_bricks = 0;
}
if(res) cout << "YES"<< endl;
else cout << "NO" <<endl;
  return 0;
}
