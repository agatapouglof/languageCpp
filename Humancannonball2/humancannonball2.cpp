#include<iostream>
// #include<cmath>
#include<math.h>
using namespace std;

const double G = 9.81;
// paremeter x abscissa
//  return the ordinate or hight when position is at x

 double d2r(double d) {
  return (d / 180.0) * ((double) M_PI);
}
double hight(double v, double w, double x){
  double res;
  w = d2r(w);
  res = -((G*x*x) / (2*v*v*cos(w)*cos(w))) + x*tan(w);
  return res;
}
int main(){
  int N ;
  double x,v,w,h1,h2,res;
  cin >> N ;
  for(int i=0; i<N; i++){
    cin >> v >> w >> x >> h1 >> h2;
    res = hight(v, w, x);
    if(res-1 >= h1 && res+1 <= h2){
      cout << "Safe" <<endl;
    }else{
      cout << "Not Safe" <<endl;
    }
  }

  return 0 ;
}
