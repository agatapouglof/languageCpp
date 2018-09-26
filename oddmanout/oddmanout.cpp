#include<bits/stdc++.h>

using namespace std;

int main(){
  int G,N,C;
  map <int,int> guests;
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> G ;
    for(int j=0; j<G; j++){
      cin >> C;
      if(guests[C]) guests[C] = 2;
      else guests[C] = 1;
    }

    for(auto x : guests ){
      if(x.second < 2 )
       cout << "Case #"<< i+1 <<":  " << x.first << endl;
    }
    guests.clear();
  }
  return 0;
}
