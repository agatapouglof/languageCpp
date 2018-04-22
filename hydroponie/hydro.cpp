# include <iostream>
# include <string>

using namespace std;

int main (){
  int N,count=0;
  cin >> N;
  char terrain[N][N];
  bool result[N][N];

  for(int i=0;i< N;i++){
    for(int j=0;j< N;j++){
        cin >> terrain[i][j];
        result[i][j] = false;
    }
  }

  for(int i=0;i< N;i++){
    for(int j=0;j< N;j++){
        if(terrain[i][j] == 'X'){
            for(int a=i-1 ; a<i+2; a++){
              for(int b=j-1 ; b<j+2; b++){
                if( a>=0 && a< N && b>=0 && b< N ){
                  // cout << "in equal \n";
                  if(terrain[a][b] == '.'){
                    // cout << "in dot" << a << b<< "\n" ;
                    result[a][b] = true;
                  }
                }
              }
            }
        }
    }
  }
  /// test of output
  // cout << "me \n";
  for(int i=0;i< N;i++){
    for(int j=0;j< N;j++){
        if(result[i][j]) count++;
        // cout << terrain[i][j];
    }
    // cout << "\n";
  }
  cout << count;
  return 0;
}
