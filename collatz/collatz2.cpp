#include<bits/stdc++.h>

using namespace std;
int collatz(int x){
  if(x%2 == 0 ) return x/2;
  return 3*x+1;
}
int main(){
  int a,b,found,A,B;
  unordered_map<int,int> syracuse;
  syracuse[1] = 1;
  cin >> a >> b;

  while(a!=0 && b!=0){
    A = a;
    B = b;
    int number = a;
    unordered_map<int,int> a_steps;
    int j=0,b_steps=0;
    a_steps[number] = j;
    while(number !=1 ){
      j++;
      if(!syracuse[number]){
        syracuse[number] = collatz(number);
      }
      number = syracuse[number];
      a_steps[number] = j;
    }
    number = b;
    while(!syracuse[number]){
      syracuse[number] = collatz(number);
      number = syracuse[number];
    }

    // for (auto const& x : syracuse)
    // {
    //     std::cout << x.first  // string (key)
    //               << ':'
    //               << x.second // string's value
    //               << std::endl ;
    // }

    bool stop = false;
    while(true){
      // attained one for all two
      if(a_steps[b]){
        found = b;
        break;
      }else{
        b=syracuse[b];
        b_steps++;
      }
    }


  cout << A <<" needs "<<a_steps[b]<<" steps, "<<B<<" needs "<<b_steps<<" steps, they meet at "<<found <<endl;
  cin >> a >> b;
}
  return 0;
}
