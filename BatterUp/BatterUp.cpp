#include<iostream>
#include<string>
#include<sstream>
#include<vector>
/*
* lost my on reading int input by reading first as a string of one line
* I can just do read int many times WHEN WE HAVE MANY INT BY LINE IT WORKS
*/
using namespace std;

int main(){
  int n,val;
  int divi = 0;
  int sum = 0;
  string line;
  float res;

  cin >> n;
  vector<string> v;
  int i=0;
  while(i < n){
    cin >> val ;
    if(val >= 0){
      sum += val;
      divi ++;
    }
    i++;
  }
  res = (float)sum / (float)divi;
  cout << res << endl;

  return 0;
}
