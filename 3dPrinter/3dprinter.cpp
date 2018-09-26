#include<iostream>

// here I supposed that the number of days to produce n machines
//with the full replication of machines is the result in days for produce n statues
//
using namespace std;

int main(){
  int statues;
  int i=1,res=1;
  cin >> statues ;
  while(res < statues){
    res *= 2;
    i++;
  }
  cout << i << endl;
  return 0;
}
