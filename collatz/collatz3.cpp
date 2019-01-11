// #include<bits/stdc++.h>
#include "../bits/stdc++.h"

using namespace std;


long long collatz(long long x){
  return (x & 1) ? x = 3 * x + 1  : x >> 1;
}
int main(){
  long long a,b,A,B,asteps,bsteps;
  unordered_map<long long,long long> a_steps;
  unordered_map<long long,long long> b_steps;
  unordered_map<long long,long long> syracuse;
  unordered_map<long long, long long> mp;
  unordered_set<int> steps;
  mp[2] = 1;

  while(true){
    cin >> a >> b;
    if(a == 0 && b==0) break;
    A = a; B = b;
    asteps = 0;
    bsteps = 0;
    a_steps[a] = asteps;
    b_steps[b] = bsteps;

    while (true) {
      if(a_steps.count(b) || b_steps.count(a)) break;
        // steps.insert(a);
        // steps.insert(b);
        if(mp[a] && a!=1) a = mp[a];
        else{
          mp[a] = collatz(a);
          a = mp[a];
        }
        if(a!=1) {asteps++; a_steps[a] = asteps;}
        if(mp[b] && b!=1) b = mp[b];
        else{
          mp[b] = collatz(b);
          b = mp[b];
        }
        if(b!=1) {bsteps++; b_steps[b] = bsteps;}

    }
    // while(a != 1 && !mp[a]){
    //   if(a!=1)
    //   j++;
    //   mp[a] = collatz(a);
    //   a = mp[a];
    //   a_steps[a] = j;
    // }
    // while(!a_steps[b]){
    //   b = collatz(b);
    //   bsteps++;
    // }
   int mini = asteps;
   if(bsteps < mini) mini = bsteps;
   cout << A <<" needs "<<a_steps[mini]<<" steps, "<<B<<" needs "<<b_steps[mini]<<" steps, they meet at "<< mini <<endl;

   // a_steps.clear();
   asteps=0;
   bsteps=0;
   steps.clear();
   // for (auto x:mp ) {
   //   cout << x.first << "  " ;
   //   cout << x.second << endl;
   // }
  }
  return 0;
}
