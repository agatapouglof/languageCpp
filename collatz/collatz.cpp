#include<bits/stdc++.h>

using namespace std;
int collatz(int x){
  if(x%2 == 0 ) return x/2;
  return 3*x+1;
}
int main(){
  int a,b,found,A,B;
  cin >> a >> b;
  while(a!=0 && b!=0){
    A = a;
    B = b;
    unordered_set<int> a_fly;
    unordered_set<int> b_fly;
    unordered_map<int,int> a_steps;
    unordered_map<int,int> b_steps;
    int j=0,steps;
    a_fly.insert(a);
    b_fly.insert(b);
    bool stop = false;
    while(!stop){
      // attained one for all two
      if(a == 1 && b == 1){
        stop = true;
      }
      //  found b in a series (a_fly)
      if(a_fly.count(b)){
        found = b;
        stop = true;
      }else{
        // found a in b series (b_fly)
        if(b_fly.count(a)){
          found = a;
          stop = true;
        }
        // else nothing found
        else{
          j++;
          if(a != 1) {
            a = collatz(a);
            a_fly.insert(a);
            a_steps[a] = j;
          }
          if(b != 1){
            b = collatz(b);
            b_fly.insert(b);
            b_steps[b] = j;
          }

        }
      }

    }
    // cout << "found : " << found << endl;
    // cout << "steps a : " << a_steps[found] << endl;
    // cout << "steps b : " << b_steps[found] << endl;
    cout << A <<" needs "<<a_steps[found]<<" steps, "<<B<<" needs "<<b_steps[found]<<" steps, they meet at "<<found <<endl;
  cin >> a >> b;
}
  return 0;
}
