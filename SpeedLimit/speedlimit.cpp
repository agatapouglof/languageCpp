#include<iostream>
#include<vector>

using namespace std;

int main(){
  int cases,distance;
  cin >> cases;
  while(cases != -1){
    int speeds[cases];
    int times[cases];
    distance = 0;
    speeds[0] = 0;
    times[0] = 0;
    for(int i=1; i<= cases; i++){
      cin >> speeds[i] >> times[i];
    }
    for(int i=0; i< cases; i++){
      distance += (times[i+1] - times[i]) * speeds[i+1];
    }
    cout << distance <<" miles" <<endl;
    cin >> cases;
  }
  return 0;
}
