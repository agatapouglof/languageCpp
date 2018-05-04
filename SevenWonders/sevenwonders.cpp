#include<iostream>
#include <map>
#include <string>
#include <math.h>

using namespace std;

int main(){
  int res = 0;
  map <char,int> elements;
  string game ;
  cin >> game;
  for(int i=0; i< game.size(); i++){
    if(elements[game[i]]){
      elements[game[i]]++;
    }else{
      elements[game[i]] = 1;
    }
  }
  for(auto x: elements){
    res += pow(x.second,2);
  }
  res += 7 * min(elements['T'],min(elements['C'],elements['G']));
  cout << res << endl;
  return 0;
}
