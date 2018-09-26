#include <bits/stdc++.h>

using namespace std;

int main(){
  int r,c, zr, zc ;
  // vector <string>;
  cin >> r >> c >> zr >> zc;
  char tab [r][c];
  for(int i=0; i<r ; i++){
    for(int j=0; j<c ; j++){
        cin >> tab[i][j];
    }
  }

  for(int i=0; i<r ; i++){
    for(int rows=0; rows<zr ; rows++){
      for(int j=0; j<c ; j++){
        for(int cols=0; cols<zc ; cols++){
          cout << tab[i][j];
        }
      }
      cout << endl;
    }
  }
  return 0;
}
