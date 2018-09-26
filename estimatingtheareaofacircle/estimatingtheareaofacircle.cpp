#include<bits/stdc++.h>

using namespace std;

int main(){
  const double PI = std::atan(1.0)*4;
  double r,m,c,rarea,sarea;
  while(true){
    cin >> r;
    cin >> m;
    cin >> c;
    if(r == 0 && m == 0 && c == 0) break;
    rarea = PI * pow(r,2);
    sarea = c/m * pow((r+r),2);
    cout.precision(9);
    cout << fixed << rarea << " " << sarea << endl;
  }
  return 0;
}
