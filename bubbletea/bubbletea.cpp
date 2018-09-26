#include <bits/stdc++.h>

using namespace std;

int main (){
  int a,b,mini=-1,ts,val,money;
  vector<int> teas;
  vector<int> topping;
  cin >> ts;
  for(int i=0; i<ts; i++){
    cin >> b;
    teas.push_back(b);
  }
  cin >> a;
  for(int i=0; i<a; i++){
    cin >> b;
    topping.push_back(b);
  }
  for(int i=0; i<ts; i++){
    cin >> b;
    for(int j=0; j<b; j++){
      cin >> val;
      if(mini == -1) mini = teas[i] + topping[val-1];
      else mini = min(mini,teas[i] + topping[val-1] );
    }
  }
  cin >>money ;
  int res = 0;
  while(money >= mini){
    money -= mini;
    res++;
  }
  if(res > 0) cout << res-1 << endl;
  else cout << res << endl;
  return 0;
}
