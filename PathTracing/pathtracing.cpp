/*
   To solve the problem I represent movements as coordinates movements
   abscisa :: right ==> ++  left ==> --
   ordinate :: up ==> ++ down ==> --
   When The abscisa become more negative the start point is moving to right
   When the ordinates growing positivly the start point is going down in the matrice
             suph
               *
               *
  infw  * * * 0,0 * * *  supw
               *
               *
              infh
So the size of result array is[suph - infh +1][supw - infw + 1]
*/

#include<iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
  int w=0,h=0 ;//width and height
  int supw=0,infw=0;
  int suph=0,infh=0;
  int a,b;// absisca and ordinate of start point
  vector<string> path;
  string input;
  while(cin >> input){
    path.push_back(input);
    if(input == "left" || input == "right"){
      if(input == "left"){
        w--;
      }
      if(input == "right"){
        w++;
      }
      supw = max(supw,w); // find right max index eg +10
      infw = min(infw,min(w,0)); // find left min index eg -7
    }else{
      if(input == "up"){
        h++;
      }
      if(input == "down"){
        h--;
      }
      suph = max(suph,h); // find up max index eg +10
      infh = min(infh,min(h,0)); // find down min index eg -7
    }
  }

  w = supw - infw + 1 ;
  h = suph - infh + 1 ;

  // created result vector here because of the size of data h, w
  vector< vector<string> > result(h, vector<string>(w));

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      result[i][j] = " ";
    }
  }

  a = suph;
  b = abs(infw);


  result[a][b] = "S";
  for(int y=0;y<path.size();y++){

    if(path[y] == "left") b--;
    if(path[y] == "right") b++;
    if(path[y] == "up") a--;
    if(path[y] == "down") a++;
    if(y == path.size()-1){
      result[a][b] = "E";
    }else{
      result[a][b] = "*";
    }
  }
  // !! important to avoid deleting "S" at start when path pass again at start point
  a = suph;
  b = abs(infw);
  result[a][b] = "S";

// formating output
  for(int i=0;i<w+2;i++){
    cout << "#";
  }
  cout << "\n";
  for(int i=0;i<h;i++){
      cout << "#";
    for(int j=0;j<w;j++){
      cout << result[i][j] ;
    }
    cout << "#\n";
  }
  for(int i=0;i<w+2;i++){
    cout << "#";
  }
  cout << "\n";
  return 0;
}
