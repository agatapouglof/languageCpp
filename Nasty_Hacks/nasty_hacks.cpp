#include<bits/stdc++.h>
#include<iostream> // important

using namespace std ;
int r,e,c,n,render,i=0;
int main() {
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> r >> e  >> c;
    render =  (e-c) -r;
    if (render > 0) {
      cout << "advertise" <<endl;
    }else{
      if (render < 0) {
        cout << "do not advertise" <<endl;
      }else{
        cout << "does not matter"<<endl;
      }
    }

  }
  return 0;
}
