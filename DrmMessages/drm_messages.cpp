#include <iostream>
#include <string>
using namespace std;

const string LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// pfff to much fo nothing I'm really a bad coder
/*
asci code for 'A' is 65
  DIVIDE :  divide input string in 2 halfs
  ROTATE :  For each half, calculate its rotation value by summing up the values of each character (A=0,B=1,…,Z=25).
     The rotation value of “EWPG” is 4+22+15+6=47.
     Rotate each character in “EWPG” 47 positions forward (wrapping from Z to A when necessary) to obtain the new string “ZRKB”.
    Following the same process on “AJRB” results in “BKSC”.
  MERGE  :The last step is to combine these new strings (“ZRKB” and “BKSC”)
    by rotating each character in the first string by the value of the corresponding character in the second string.
     For the first position, rotating ‘Z’ by ‘B’ means moving it forward 1 character, which wraps it around to ‘A’.
      Continuing this process for every character results in the final decrypted message, “ABCD”.

*/
string rotate(string str,int move){

  int pos,newpos;
  string res ="";
  for(int j=0; j< str.length(); j++){
    pos = LETTERS.find(str[j]);
    newpos =  pos + move ;
    if(newpos > 25){
      newpos %= 26;
    }
    res = res + LETTERS[newpos];
  }
  return res;
}
//  start main function
int main(){
  string text;
  int half;
  string result = "";
  int position ;
  int to_move = 0;
  string st1,st2;
  cin >> text;

  half  = text.length() / 2;
  st1 = text.substr(0,half);
  st2 = text.substr(half);

  for(int a=0; a<st1.length(); a++){
    to_move += LETTERS.find(st1[a]);
  }
  string rot1 = rotate(st1,to_move);
  to_move = 0;
  for(int a=0; a<st2.length(); a++){
    to_move += LETTERS.find(st2[a]);
  }
  string rot2 = rotate(st2,to_move);
  for(int z=0; z < rot1.length(); z++){
    position = LETTERS.find(rot2[z]);
    position += LETTERS.find(rot1[z]);
    if(position > 25) position %= 26;
      result = result + LETTERS[position];
  }

  cout << result << endl;
  return 0;
}
