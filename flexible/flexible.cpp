// #include "../bits/stdc++.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
  int maxi, nbelements, elt;
  vector<int> elements;
  set<int> res;
  cin >> maxi;
  cin >> nbelements;
  for (int i = 0; i < nbelements; i++) {
    cin >> elt;
    elements.push_back(elt);
    res.insert(elt);
  }
  elements.push_back(maxi);
  res.insert(maxi);
  elt = 0;
  for (int i = 0; i < nbelements+1; i++) {
    for (int j = i+1; j < nbelements+1; j++) {
      res.insert(elements[j] - elements[i]);
    }
  }

  for (auto x:res) {
    cout << x << " ";
  }

  return 0;
}
