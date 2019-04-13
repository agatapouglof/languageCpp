#include "bits/stdc++.h"

using namespace std;

int main(){
  int m,l,h,res_l=0,res_h=0;
  int current_line = 0; // actual width of the  line being proccessed
  int line_height = 0;
  while (true) {
    cin >> m;
    if(m == 0) break;
    while(cin >> l >> h){
      if(l== -1 && h == -1) {
        res_h += line_height;
        cout << res_l << " X " << res_h << endl;
        res_h = 0;
        res_l = 0;
        current_line = 0;
        line_height = 0;
        break;
      }
      //  We are looking for the highest element on each line 
      if(current_line + l <= m){
        current_line += l;
        if(res_l < current_line) res_l = current_line;

        if(line_height < h) line_height = h;
      }
      else{
        res_h += line_height;
        current_line = l;
        line_height = h;
        if(res_l < current_line) res_l = current_line;
      }
    }

  }
  return 0;
}
