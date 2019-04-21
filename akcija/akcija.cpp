/*
  Sort the array of prices
  Select all triplet in oder and don't count the first one in the total price
  if the number of books is no divisible by 3 the first one or two books will be together in a non triplet
*/

#include "bits/stdc++.h"

using namespace std;

int main(){
  int n,temp,mini=0;
  vector<int> numbers;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    numbers.push_back(temp);
  }
  sort(numbers.begin(), numbers.end());
  int j = n % 3 ; // where to start the iteration on the triplets
  int tp = 0;
  while(tp < j){ mini += numbers[tp]; tp++; } // add the first before triplets to the total count
  int index = 0;
  for (j ; j < n; j++) {
    // if it is not the start of a tripet
    if(index != 0){
      mini += numbers[j];
    }
    // end of a tripet
    if(index == 2 ){
      index = 0;
    }else{
      index++;
    }
  }
  cout << mini << endl;
  return 0;
}
