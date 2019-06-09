#include "bits/stdc++.h"

using namespace std;
// using the optimal order ==> sort the passwords down
int main(){
  int n;
  string pass;
  vector<double> passwords;
  double prob,res=0.0;
  cin >> n;
  for (size_t i = 1; i <= n; i++) {
    cin.ignore(20, ' '); // ignore up to 20 characters or until space
    cin >>  prob;
    passwords.push_back(prob);
  }
  sort(passwords.begin(), passwords.end());
  reverse(passwords.begin(), passwords.end());
  for (size_t i = 0; i < n; i++) {
    res += (i+1) * passwords[i] ;
  }
  cout << fixed;
  cout.precision(4); // !! important to pass this problem
  cout << res << endl;
  return 0;
}
