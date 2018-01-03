#include<bits/stdc++.h>
#include<iostream> // important

using namespace std ;

int x,y;
int main(){
  cin >> x >> y;
  if(x>0){
    if(y>0){
      cout << 1;
    }else{ // (x>0 && y<= 0)
      cout << 4;
    }
  }else{ // x<=0
    if(y>0){ //(x<=0 && y>0)
      cout << 2;
    }else{  //(x<=0 && y<=0)
      cout << 3;
    }
  }
  return 0;
}
