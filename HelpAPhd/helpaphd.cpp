#include<iostream>
#include <string>

using namespace std;

int main(){
  int N,a,b,pos;
  string input,temp;
  cin >> N;
  for(int i=0; i<N ;i++){
    cin >> input;
    pos  = input.find('+');
    if(pos!=string::npos){
      temp =  (input.substr(0,pos));
      a =  stoi(temp);
      temp = input.substr(pos+1);
      b =  stoi(temp);
      cout << a + b << endl;
    }else{
      cout << "skipped" << endl;
    }

  }
  return 0;
}
