#include <bits/stdc++.h>
#include<iostream>

using namespace std;
int n,i,ct=0,j;
string fight;
int main() {
  cin >> n;
  for ( i = 0; i < n; i++) {
    cin >> fight;
    // j=0;
    if(!(fight[fight.length()-2] == 'C' && fight[fight.length()-1] == 'D')){
      ct++;
    }
  }
 cout << ct;
  return 0;
}
