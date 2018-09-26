// 26/05/2018
// Cut and Count
#include<iostream>
#include<cmath>
#include<string>
#include<set>

using namespace std;

int main(){
  int N,maxi=0;
  set<char> res; // characters in both string without repitition
  string S,st1,st2;
  cin >> N;
  cin >> S;
  for(int i=0; i<N-1; i++){
    st1 = S.substr(0,i+1);
    st2 = S.substr(i+1);
    for(int j=0; j <st1.length() ; j++){
      if(st2.find(st1[j]) != string::npos){
        res.insert(st1[j]);
      }
    }
    if(res.size() > maxi )  maxi = res.size();
    res.clear();
  }

  cout << maxi << endl;
  return 0;
}
