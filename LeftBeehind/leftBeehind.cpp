#include<iostream>

using namespace std;

int main(){
  int sweet,sour,count=0;
  bool test = true;
  do{
    cin >> sweet ;
    cin >> sour  ;
    if(sweet > 0 || sour > 0){
        if((sweet + sour ) == 13 ){
          cout << "Never speak again.\n";
        }else{
        if(sweet > sour){
          cout << "To the convention.\n";
        }else{
          if(sweet < sour){
            cout << "Left beehind.\n";
          }else{
            cout << "Undecided.\n";
          }
        }
      }
    }else{ test = false;}
    count++;
    // if(count >= 15) test = false;
  }while(test);
  return 0;
}
