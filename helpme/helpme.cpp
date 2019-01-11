#include "../bits/stdc++.h"
// #include <bits/stdc++.h>

using namespace std;


struct piece{
  char name;
  int  col;
  int  row;
}  ;

int main() {


   vector<string> tokens;
   string token;
   vector<piece> whites;
   vector<piece> blacks;
   int mcol=8,mrow=8;
   // string s = "my:test:go:i";
   for (int i = 0; i < 17; i++) {
     // string s = "|:p:|.p.|:p:|.i.|:p:|.p.|:::|.p.|";
     cin >> s ;
     std::istringstream tokenStream(s);
     /* code */
     if(s[0] == '|'){
       while (std::getline(tokenStream, token, '|'))
       {
         piece temp;
         if(token[1] && token[1] !=':' && token[1] !='.' ) {
           cout << token[1] << endl;
           temp.name = token[1];

         }
         tokens.push_back(token);
       }
       // mcol = 8;
       mrow--;


     }
   }
   // cout << tokens[0] << endl;
   // cout << tokens[1] << endl;

  return 0;
}
