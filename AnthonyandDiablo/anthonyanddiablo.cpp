#include<iostream>
#include<cmath>

//  it seem that the figure with the maximun area  and  the minimum perimeter is the circle
// so the cage  a circle
using namespace std;

int main(){
  double A,N,area;
  cin >> A >> N;
  //  knowing the perimeter N find the corrsponding area in a circle
  area = pow(N,2)/(4*M_PI);
  if(area > A) {
    cout << "Diablo is happy!" << endl;
  }else{
    cout << "Need more materials!" << endl;
  }
  return 0;
}
