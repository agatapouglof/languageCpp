#include<iostream>

using namespace std;

int main(){
  int note,index;
  int maxi = 0;
  int sum;
  for(int i=0; i<5; i++){
    sum = 0;
    for(int j=0; j<4; j++){
      cin >> note;
      sum += note;
    }
    if(sum > maxi){
      index = i+1;
      maxi = sum;
    }
  }
  cout << index <<" "<< maxi << endl;
  return 0;
}
