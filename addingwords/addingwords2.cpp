#include <bits/stdc++.h>

using namespace std;

map<string, int> variables;
map<int, string> numbers;

void calcul();


int main(){

  string text,var;
  int num;
  while (cin >> text) {
    if(text.compare("calc") == 0 ){
      calcul();
    }
    else if(text.compare("def") == 0 ){
      cin >> var >> num ;
      if(variables.find(var) != variables.end()){
        //  delete also number associeted to existing variable
        int to_delete = variables[var];
        variables.erase(var);
        // numbers.erase(num);
        numbers.erase(to_delete);

      }
      variables[var] = num;
      numbers[num] = var;
    }
    else if(text.compare("clear") == 0 ){
      variables.clear();
      numbers.clear();
    }
  }
  return 0;
}

void calcul(){
  string text, text_res ="";
  bool increment=true,unknown = false;
  int res = 0;

  while(cin >> text && text.compare("=")  != 0){
      text_res = (text_res.length() > 0) ? text_res +" " + text : text ;
      if(text.compare("+")  == 0) {
        increment = true;
        continue;
      }
      if(text.compare("-")  == 0){
        increment = false;
        continue;
      }

      if(variables.find(text) != variables.end()){
        if(increment) res += variables[text];
        if(!increment) res -= variables[text];
      }else {unknown = true;}

  }
  if(unknown || numbers.find(res) == numbers.end()) cout << text_res << " = " << "unknown" << endl;
  else cout << text_res << " = "<< numbers[res] << endl;

}
