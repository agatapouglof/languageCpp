#include<iostream>
#include<cmath>

const long double EPSILON = 0.000000001;
using namespace std;

int main(){
  long double init,val,N,infe=0.066,sup=1.445;
  init = 1.0;
  val = init;
  cin >> N;
  int p = 0;
  // cout << abs(val - N) <<endl;
  while(abs(val - N) > EPSILON){
    // cout << "val : " << val <<endl ;
    // cout << "sup : " << sup<<endl ;
    // cout << "infe : " << infe <<endl ;
    // cout << "init : " << init <<endl ;
    if(val - N > 0.000000001){
      sup = init;
      init = (sup + infe) / 2.0;
      val  = init;
    }else{
      if(val - N < -0.000000001){
        infe = init;
        init = (sup + infe) / 2;
        val  = init;
      }
    }
    // cout << "val : " << val <<endl ;
    // if(p==20)break;
    // p++;
    for(int i=0; i< 5000; i++){
      val = pow(init,val);
    }
  }
  cout.precision(6);
  cout << std::fixed;
  cout << init << endl;

  // cout << val << endl;
  return 0;
}
