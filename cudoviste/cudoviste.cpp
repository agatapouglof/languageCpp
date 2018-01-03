#include<bits/stdc++.h>
#include <iostream>

using namespace std;
int r,c,i,j,a=0,b=0;
/* u v
   w z
*/
int u,v,w,z,temp;
char tab[50][50];
int res[5] = {0,0,0,0,0};

// std::vector<std::vector<int> > tab;
int main() {
  cin >> r;
  cin >> c;
  for ( i = 0; i < 50; i++) {
    for ( j = 0; j < 50; j++) {
      tab[i][j] = '_';
    }
  }

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      cin >> tab[i][j];
    }
  }

for (a = 0; a < r-1; a++) {
   for ( b = 0; b < c-1; b++) {
    //  cout << tab[a][b] << tab[a][b+1] <<endl;
     temp = 0;
     u = tab[a][b];
     v = tab[a][b+1];
     w = tab[a+1][b];
     z = tab[a+1][b+1];
     if(u !='#' && v != '#' && w != '#' && z != '#'){
       if(u == 'X') temp++;
       if(v == 'X') temp++;
       if(w == 'X') temp++;
       if(z == 'X') temp++;
       res[temp]++;
     }
    //  cout << tab[a+1][b] << tab[a+1][b+1] <<endl;
   }
}
for (i = 0; i < 5; i++) {
   cout << res[i] << endl;
}



  return 0;
}
