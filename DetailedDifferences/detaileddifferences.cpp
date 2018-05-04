#include<iostream>
#include<string>
using namespace std;

int main(){
  int N;
  string p1,p2,diff;
  cin >> N;
  for(int i=0;i<N;i++){
   cin >> p1 >> p2;
   diff = "";
   for(int j=0; j<p1.size(); j++){
     if(p1[j] == p2[j]) diff +=".";
     else diff+="*";
   }
   cout << p1 << endl;
   cout << p2 << endl;
   cout << diff << endl;
   cout << "\n";
  }
  return 0;
}
