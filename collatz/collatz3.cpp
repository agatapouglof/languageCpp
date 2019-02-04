#include<bits/stdc++.h>
// #include "../bits/stdc++.h"

using namespace std;


int collatz(int x){
  return (x & 1) ? x = 3 * x + 1  : x >> 1;
}
int main(){
  int a,b,A,B,asteps,bsteps;
  unordered_map<int,int> a_steps;
  unordered_map<int,int> b_steps;
  unordered_map<int,int> syracuse;
  unordered_map<int, int> mp;
  unordered_set<int> steps;
  mp[2] = 1;
  int met;

  while(true){
    cin >> a >> b;
    if(a == 0 && b==0) break;
    A = a; B = b;
    asteps = 0;
    bsteps = 0;
    a_steps[a] = 0;
    b_steps[b] = 0;
    // cout << "a : " << a <<" steps : "<< asteps <<endl;
    // cout << "b : " << b <<" steps : "<< bsteps <<endl;
    while (true) {

      if(b_steps.find(a) != b_steps.end()) {  met=a;  break;}
      if(a_steps.find(b) != a_steps.end()) { met=b; break;}

        // steps.insert(a);
        // steps.insert(b);
        if(mp.find(a) != mp.end() && a!=1){
          a = mp[a];
        }
        else{
          if(a_steps.find(1) == a_steps.end()) {
            mp[a] = collatz(a);
            a = mp[a];
          }
        }
        if(a_steps.find(1) == a_steps.end()) {asteps++; a_steps[a] = asteps;}
        if(b_steps.find(a) != b_steps.end()) {  met=a;  break;}

        if(mp.find(b) != mp.end() && b!=1){
          b = mp[b];
        }
        else{
          if(b_steps.find(1) == b_steps.end()) {
            mp[b] = collatz(b);
            b = mp[b];
          }
        }
        if(b_steps.find(1) == b_steps.end()) {bsteps++; b_steps[b] = bsteps;}
        if(a_steps.find(b) != a_steps.end()) { met=b; break;}

        // cout << "a : " << a <<" steps : "<< asteps <<endl;
        // cout << "b : " << b <<" steps : "<< bsteps <<endl;
    }
   // int mini = asteps;
   // if(bsteps < mini) mini = bsteps;
   cout << A <<" needs "<<a_steps[met]<<" steps, "<<B<<" needs "<<b_steps[met]<<" steps, they meet at "<< met <<endl;
   a_steps.clear();
   b_steps.clear();
   asteps=0;
   bsteps=0;
   // steps.clear();
   // for (auto x:mp ) {
   //   cout << x.first << "  " ;
   //   cout << x.second << endl;
   // }
  }
  return 0;
}
