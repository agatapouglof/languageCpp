#include<bits/stdc++.h>

using namespace std;

int main(){
  int S,x,y;
  cin >> S;
  cout << S << ":" << endl;
  for(int i=2; i< S ; i++){
    x = 2;
    while(true){
      if(x > S ) break;
      if(x * i +x *(i-1) == S){
        cout << i <<"," << i-1 << endl;
        // break;
      }
      if(x * i +(x-1) *(i-1) == S){

        cout << i <<"," << i-1 << endl;
        // break;
      }
      if((x * i + x * i ) == S){
        cout << i <<"," << i << endl;
        // break;
      }
      if(x * i +(x-1) *(i) ==S){
        cout << i <<"," << i << endl;
        // break;
      }
      x++;
    }
    // x = S / i ;
    // y = S % (i-1);
    // if(y == 0 ) cout << i <<","<< i-1 <<endl;
    // y = S % (i);
    // if(y == 0 ) cout << i <<","<< i <<endl;
    // cout << "x : " << x << endl;
    // cout << "y : " << y << endl;
  }
  return 0;
}
