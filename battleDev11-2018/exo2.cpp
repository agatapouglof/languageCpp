#include "../bits/stdc++.h"
// #include <bits/stdc++.h>

using namespace std;



int main() {
  int nt [5] ;
  vector<string> mots ;
  int a, b, c, nb_codes,result=0;
  double d = 0.0;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  string voyelles = "aeiouy";
  string st ="";
  string  temp = "";
  bool test = false;

  cin >> nb_codes ;

  for (int i = 0; i < nb_codes; i++) {
    test = false;
    cin >> st;
    if(st.length() >=5 && st.length()<=7){
      temp = "" ;
      temp.push_back(st[0]);
      temp.push_back(st[1]);
      if(alphabet.find(temp) != std::string::npos){

        temp = "" ;
        temp.push_back(st[st.length()-1]);
        if(voyelles.find(temp) != std::string::npos){
          test = true;
          for (int i = 0; i < mots.size(); i++) {
            if(mots[i].find(st) != std::string::npos) test = false;
          }
          if(test) result++;
          mots.push_back(st);

        }
      }
    }
  }

  cout << result <<endl;


  return 0;
}
