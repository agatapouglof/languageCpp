#include "bits/stdc++.h"

using namespace std;

int main() {
    string text;
    int cases;
    cin >> cases;
    while(cases--){
      cin >> text;
      int l = text.length();
      int n = sqrt(l);
      int inc = 0;
      char table[n][n];
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
           table[i][j] = text[inc];
           inc++;
         }
      }

      for (int i = n-1; i >=0; i--) {
        for (int j = 0; j < n ; j++) {
          cout << table[j][i] ;
        }
      }
      cout << endl;

    }
  return 0;
}
