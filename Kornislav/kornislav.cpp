#include<iostream>
#include <algorithm>


using namespace std;

int main(){
  int tab[4];
  cin  >> tab[0] >> tab[1] >> tab[2] >> tab[3] ;
  sort(tab,tab+4);
  cout << tab[0] * tab[2];
  return 0;
}
