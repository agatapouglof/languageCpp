#include "bits/stdc++.h"

using namespace std;

bool is_harshad(string);

int main(){
    int number;
    string input_text;
    cin >> input_text;
    while(!is_harshad(input_text)){
      stringstream ss(input_text);
      ss >> number;
      number++;
      // stringstream sss;
      // sss << number;
      // input_text = sss.str();
      input_text = to_string(number);
    }
    cout << input_text <<endl;

    return 0;
}

bool is_harshad(string text){
  int text_number,sum=0;
  stringstream ss(text);
  ss >> text_number;
  for(int i=0; i<text.length(); i++ ){
    int tmp = text[i] - 48 ; // convert char to int through ascii table
    sum += tmp;
  }
  return (text_number % sum ==0);
}
// 1451
