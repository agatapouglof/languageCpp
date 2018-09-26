#include<bits/stdc++.h>

using namespace std;

long long collatz(long long x){
  if(x%2 == 0 ) return x/2;
  return 3*x+1;
  return (x & 1) ? x = 3 * x + 1  : x >> 1;
}
int main(){
  long long a,b,A,B,j,bsteps;
  unordered_map<long long,long long> a_steps;
  unordered_map<long long,long long> syracuse;
  while(true){
    cin >> a >> b;
    if(a == 0 && b==0) break;
    A = a; B = b;
    j = 0;
    a_steps[a] = j;
    while(a != 1){
      j++;
      a = collatz(a);
      a_steps[a] = j;
    }
    bsteps = 0;
    while(!a_steps[b]){
      b = collatz(b);
      bsteps++;
    }

   cout << A <<" needs "<<a_steps[b]<<" steps, "<<B<<" needs "<<bsteps<<" steps, they meet at "<<b <<endl;

   a_steps.clear();
  }
  return 0;
}
