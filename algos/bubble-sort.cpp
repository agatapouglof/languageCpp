#include "../bits/stdc++.h"
// #include <bits/stdc++.h>

using namespace std;

int main() {
  int numbers[9] = {1,3,9,4,5,2,7,6,8};
  bool xchange = true;
  while(xchange){
    xchange = false;
    for (int j =0 ; j < 8; j++) {
      if(numbers[j] > numbers[j+1]){
        swap(numbers[j],numbers[j+1]);
        xchange = true;
      }
    }
  }
  for (int i = 0; i < (sizeof(numbers)/sizeof(*numbers)) ; i++) {
    cout << numbers[i] << endl;

  }
  cout << "Good testing" << endl;
  return 0;
}
