#include<iostream>
#include<string>
#include<cctype>
#include<set>

using namespace std;

int main(){
  int lower=0,uper=0,spaces=0,symbols=0;
  string input;
  getline(cin,input);
  double lng = input.length();
  for(int i=0; i<input.length(); i++){
    if(isupper(input[i])){
      uper++;
    }else{

      if(islower(input[i])){
        lower++;
      }else{

        if(input[i] == '_') {
          spaces++;
        }else {
          symbols ++;
        }
      }
    }

  }
  cout << fixed;
  cout.precision(15);
  cout << double(spaces/lng) << endl;
  cout << double(lower/lng) << endl;
  cout << double(uper/lng) << endl;
  cout << double(symbols/lng) << endl;
  return 0;
}
