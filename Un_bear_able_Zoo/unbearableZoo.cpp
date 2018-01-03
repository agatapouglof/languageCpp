#include<bits/stdc++.h>
#include <iostream>

using namespace std;

string last,test = "testphl  vybuinm vuibonm";
int i,posi = -1;
int main() {
  for (size_t i = 0; i < test.length(); i++) {
    cout << test[i] << '\n';
  }
  posi = test.find_last_of(' ');
  transform(test.begin(), test.end(),test.begin(), ::toupper);
  cout << test <<endl;
  cout << posi <<endl;
  cout <<test[posi+1] << endl;
  last = (posi) ? str : str.substr(pos+1) ;
  return 0;
}
