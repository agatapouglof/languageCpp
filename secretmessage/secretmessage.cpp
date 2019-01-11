// #include "../bits/stdc++.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
  string message, p_message, coded_message;
  int  cases;
  cin >> cases;
  for (int c = 0; c < cases; c++) {

    cin >> message;
    int i=1;
    while(i*i < message.length() ) i++;
    p_message = message;
    int b=0;
    while(b < ((i*i) - message.length())){
      p_message = p_message + "" + '*';
      b++;
    }
    char tab [i][i];
    int a = 0;
    for (int x = 0; x < i; x++) {
      for (int y = 0; y < i; y++) {
        tab[x][y] = p_message[a];
        a++;
      }
    }
    char res_tab[i][i] ;
    // rotate array 90 deg clockwise
    for (int x = 0; x < i; x++) {
      for (int y = 0; y < i; y++) {
        res_tab[x][y] = tab[i-1-y][x];
      }
    }

    for (int x = 0; x < i; x++) {
      for (int y = 0; y < i; y++) {
        if(res_tab[x][y] != '*') cout << res_tab[x][y] ;
      }
    }
    cout << endl;
  }

  return 0;
}
