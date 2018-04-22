#include <iostream>
#include <string>
using namespace std;

int main(){
  int tab[8] = {-1,2,4,-3,5,2,-5,2};
  int lg = 8 ; // array length
  string content ;
  int max=0, sum=0;
  for(int a=0;a<lg-1;a++){
    sum = tab[a];// in corection sum = 0;
    for(int b=a+1;b<8;b++){
      sum += tab[b];
      cout << sum << endl;
      if(sum > max) max = sum;
    }
  }
  cout << max << endl;
  return 0;
}
