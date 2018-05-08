#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
  int T,input = -1,tmp,nborn=0 ;
  cin >> T;

  for(int i=0;i<T;i++){
    input = -1;
    nborn = 0;
    do{
      cin >> tmp;
      if(input < 0){input = tmp;}
      else{
        if(tmp > (2*input)){
          nborn += tmp - 2*input;
        }

        input = tmp;
      }

    }while(input != 0 );
    cout << nborn << endl;
  }

  return 0;
}
