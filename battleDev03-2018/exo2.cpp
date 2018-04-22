#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int prix,tables,parTable,res;
  float moyenne = 0.0,sum=0.0;
  cin >> prix;
  cin >> tables;
  for(int i=0; i<tables;i++){
    cin >> parTable;
    if(parTable >= 10){
      sum +=  (prix * parTable)  * 0.7;
    }else{
      if(parTable >= 6){
        sum += (prix * parTable)  * 0.8;
      }else{
        if((parTable >= 4)){
          sum += (prix * parTable)  * 0.9;
        }else{
          sum +=  (prix * parTable)  ;
        }
      }
    }
  }
  res = ceil(sum);
  cout << res;
  return 0;
}
