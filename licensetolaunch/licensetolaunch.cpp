#include "bits/stdc++.h"

using namespace std;

int main(){
  int index=0, value, steps, rd;
  cin >> steps;
  for (int i = 0; i < steps; i++) {
    cin >> rd;
    if(i==0){
      value = rd;
    }else{
      if(rd < value){
        value = rd;
        index = i;
      }
    }
  }

  cout << index << endl;
  return 0;
}
