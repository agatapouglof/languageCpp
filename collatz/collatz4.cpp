/*
 tired of failure I searched on the internet and found interesting solution from mpfeifer1 on github
 here I tried to reproduce it
*/

// #include "../bits/stdc++.h"
#include<bits/stdc++.h>
using namespace std;

// return vector of all collatz elements of input number
vector <long long> collatz(long long num){
  vector <long long> v;
  v.push_back(num);
  while(num != 1){
    if(num & 1)  num = 3 * num + 1;
    else num = num >> 1;
    v.push_back(num);
  }
  return v;
}

int main() {
  long long a,b,res=1;
  vector<long long> va;
  vector<long long> vb;
  while(true){
    cin >> a >> b ;
    if(a == 0 and b == 0) break;
    va = collatz(a);
    vb = collatz(b);
    int index_a = va.size();
    int index_b = vb.size();
    while(va.size() >0 && vb.size() > 0 && va.back() == vb.back()){
      res = va.back();
      va.pop_back();
      vb.pop_back();
    }
    cout << a <<" needs "<<va.size()<<" steps, "<<b<<" needs "<<vb.size()<<" steps, they meet at "<< res <<endl;

  }

  return 0;
}
