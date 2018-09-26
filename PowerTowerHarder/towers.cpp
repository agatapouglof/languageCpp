#include<iostream>
#include<string>
#include<cmath>
#include<vector>

using namespace std;

int main(){
  string nbr;
  long long nb;
  vector<long long> numbers;
  // cin >> nbr;
   cin >> nb;
   numbers.push_back(log(nb));

   for(auto x:numbers){
     cout << x << endl;
   }
  return 0;
}
