// pretty code using class in c++

#include "bits/stdc++.h"

using namespace std;

class circle{
  double x,y,volume,rayon;
  public : string color;
  public :  circle(double x, double y, double v, string c ){
    this->rayon = sqrt(v/M_PI);
    this->x = x;
    this->y = y;
    this->color = c;
  }
  public: double distance(double a, double b, double x, double y){
    return sqrt(powf((x-a),2) + powf((y-b),2));
  }
  public:bool is_in_circle(double a, double b){
    return (this->distance(a,b,this->x,this->y) <= this->rayon );
  }
};

void color(vector<circle> circles,double x, double y){
  string color  = "white";
  while(circles.size()>0){
    circle elt =  circles.back();
    if(elt.is_in_circle(x,y)){
      color = elt.color;
      break;
    }
    circles.pop_back();
  }
  cout << color << '\n';
}
int main(){
  double x,y,v;
  string col;
  double a,b; // points to test
  int n = 0,lp;
  cin >> lp ;
  while(lp >0){
    // read all colors circles
    cin >> n ;
    vector<circle> elements;
    while(n > 0){
      cin >> x >> y >> v >> col;
      circle cr = circle(x, y , v, col);
      elements.push_back(cr);
      n--;
    }
    // read test input
    int test = 0;
    cin >> test;
    while (test > 0) {
      cin >> a >> b;
      color(elements, a, b);
      test--;
    }
    elements.clear();
    lp--;
  }
  return 0;
}
