#include<iostream>
#include<string>
#include<set>

using namespace std;

int main(){
  set <string> phrase ;
  string mot ;
  bool repeat = false;
   while(cin >> mot){
     cout << phrase.count(mot) << endl;
     if(phrase.count(mot)) {
       repeat = true;
       break;
     }
     else {
       phrase.insert(mot);
     }
   }
   if(repeat) {cout << "no" <<endl;}
   else {cout << "yes" << endl;}
  return 0;
}
