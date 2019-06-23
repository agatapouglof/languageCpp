/*
  cylinder : the full cylinder from bottom to top
  wood : rest wood part after removing the eaten part
  half_wood : the low or top half part of rest  wood
  cone : the cone from bottom to center of the figure
  tmp : the rest when you remove the cone from the half_wood it is exactly the 2/3 of the cylinder from d to the center of the figure d/2
  d = pow((12 * tmp / M_PI),(1.0/3))  is the formula to extract d from 2/3 of the small cylinder because tmp == 2/3 small cylinder
  knowing the formula of the cylinder you can find d to make equal 2/3 small cylinder to tmp
*/

#include "bits/stdc++.h"

using namespace std;

int main() {
  double d,D,V;
  while(true){
    cin >> D >> V;
    if(D==0 && V==0) break;
    double cylinder = M_PI * pow((D/2.0), 2.0) * D ;
    double wood = cylinder - V;
    double half_wood = wood / 2.0;
    double cone = 1.0/3 * M_PI * pow((D/2), 2) * D/2;
    double tmp = half_wood - cone;
    d = pow((12 * tmp / M_PI),(1.0/3)) ;
    cout << fixed;
    cout.precision(9);
    cout <<  d << endl;
  }
  return 0;
}
