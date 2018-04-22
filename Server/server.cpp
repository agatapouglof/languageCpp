#include<iostream>
using namespace std;

int main(){
  int n,T,i=0,count=0,task;
  bool done = false;
  cin >> n >> T;
  while(i<n && !done ){
    cin >> task ;
    if(task > T ) {
      done = true;
    }else{
      count ++;
      T -= task;
    }
    i++;
  }
  cout << count << endl;
  return 0;
}
