#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(){
  int N,K,distance,val;
  int mynotes[5],res;
  float moyenne;
  for(int i=0;i<5;i++){
    cin >> mynotes[i] ;
  }
  cin >> N;
  cin >> K;
  int distances[N];
  int distancesSort[N];
  int elts[N];
  int lastNote[N];

  for(int i=0; i<N; i++){
    distance = 0;
    elts[i] = i;
    for(int j=0; j<5; j++){
      cin >> val;
      distance += abs(val - mynotes[j] );
    }
    distances[i] = distance;
    cin >> lastNote[i];
  }
int mini,temp ;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N-1; j++) {
      if (distances[j] > distances[j+1]) {
        mini = distances[j];
        distances[j] = distances[j+1];
        distances[j+1] = mini;
        temp = elts[j+1];
        elts[j+1] = elts[j];
        elts[j] = temp;
      }
    }
  }
  // sort(distances, distances + N);
  // for(int i=0;i<N;i++){
  //   // cout << elts[i] << endl;
  //   cout << distances[i] << endl;
  // }
  moyenne = 0.0;
  for(int i=0;i<K;i++){
    moyenne += lastNote[elts[i]];
  }
  moyenne = moyenne / K;
  res = floor(moyenne);
  cout << res;
  return 0;
}
// for(int i=0;i<5;i++){}
