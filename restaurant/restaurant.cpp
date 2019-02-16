#include <bits/stdc++.h>

using namespace std;

int main(){
  int p1=0,p2=0,n;
  string order;
  int number;
  cin >> n;
  while (true){
    if(n == 0) break;
    p1 = 0;
    p2 = 0;
    for (int i = 0; i < n; i++) {
      cin >> order;
      cin >> number;
      if (order.compare("DROP") == 0) {
        p2 += number;
        cout << "DROP 2 " << number <<endl;
      }
      if (order.compare("TAKE") == 0) {
        if(p1 == 0){
          p1 = p2 ;
          cout << "MOVE 2->1 " << p2 << endl;
          p2 = 0;
          cout << "TAKE 1 " << number << endl;
          p1 -= number;
        }else{
          if(p1 >= number){
            p1 -= number;
            cout << "TAKE 1 " << number << endl;
          }else{
            cout << "TAKE 1 " << p1 << endl;
            number -= p1;
            p1 = 0;
            cout << "MOVE 2->1 " << p2 << endl;
            p1 = p2;
            p2 = 0;
            cout << "TAKE 1 " << number << endl;
            p1 -= number;
          }
        }
      }
    }
    cin >> n;
    if(n == 0) break;
    cout << endl;
  }


  return 0;
}
