#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,sum;
  vector<int> elements ;
  string line;
  while (getline( cin, line )){
    istringstream is( line );
    while( is >> n){
      elements.push_back(n);
     }
      sum = accumulate(elements.begin(), elements.end(), 0);
      for(int i=0; i<elements.size(); i++){
        if(sum-elements[i] == elements[i]){
          cout << elements[i]  <<endl;
          break;
        }
      }
      elements.clear();

  }
  return 0;
}
