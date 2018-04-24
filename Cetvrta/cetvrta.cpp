#include<iostream>
#include<set>
using namespace std;
// remark : abscissa and ordinate coordinates are the same 2 by 2 for rectangle with sides parallel to the axes
//  so I search for the missing coordinates :)
int main(){
  int a,b,r1,r2;
  multiset<int> absi;
  multiset<int> ordo;
  for(int i=0; i<3; i++){
    cin >> a >> b;
    absi.insert(a);
    ordo.insert(b);

  }
  for(auto x: absi){
    if(absi.count(x) == 1 ) r1 = x;
  }
  for(auto y: ordo){
    if(ordo.count(y) == 1 ) r2 = y;
  }

  cout << r1 << " " << r2 << endl;
  return 0;
}
