#include<iostream>
using namespace std;

void compose(int a, int b, double c){
  bool test = false;
  if((a+b) == c ) { test = true;  }
  if((a*b) == c ) { test = true;  }
  if((a-b) == c ) { test = true;  }
  if((b-a) == c ) { test = true;  }
  if((((double)a/(double)b)) == c ) { test = true; }
  if((((double)b/(double)a)) == c ) { test = true; }

  if(test) cout << "Possible" <<endl;
  if(!test) cout << "Impossible" <<endl;
}

int main(){
  int N,x,y;
  double z;
  cin >> N;
  for (int i=0; i<N; i++){
    cin >> x >> y >> z;
    compose(x,y,z);
  }
  return 0;
}
