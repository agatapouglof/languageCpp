#include<bits/stdc++.h>

using namespace std;

int main(){
  int T,M,D,di;
  int days,res,temp;
  cin >> T;
  for(int i=0; i<T; i++){
    days = 0;
    res = 0;
    cin >> D ;
    cin >>  M;
    for(int j=0; j<M; j++){
      cin >> di;
      temp = days + 12;
      if(di >= 13 && temp % 7 == 5){
        res++;
      }
      days += di;
    }
  cout << res<< endl;
  }
  return 0;
}
