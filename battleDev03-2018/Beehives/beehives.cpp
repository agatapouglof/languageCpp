#include<iostream>
#include<vector>
#include<set>
#include<cmath>
using namespace std;

struct point{
  double x;
  double y;
};
typedef point point;

double dist(point p1, point p2){
  return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));
}
int main(){
    double d;
    int N;
    cin >> d >> N;
    while(d != 0.0 && N != 0 ){
      vector<point> hives;
      set<int> sour;
      for(int i=0; i<N; i++){
        point p;
        cin >> p.x >> p.y ;
        hives.push_back(p);
      }

      for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
          if(dist(hives[i],hives[j]) <= d) {
            sour.insert(i);
            sour.insert(j);
          }
        }
      }
      cout << sour.size()<<" sour, "<< N-sour.size() <<" sweet" << endl;
      cin >> d >> N;
    }
   return 0;
}
