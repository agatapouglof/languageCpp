#include "../bits/stdc++.h"
// #include <bits/stdc++.h>

using namespace std;



int main() {
  int nt [5] ;
  int nb_encheres;
  int prix_reserve;
  int mini;

  int a, b, c, prix;
  double d = 0.0;
  string st ="";
  string nom ="";


cin >> nb_encheres;
cin >> prix_reserve;

for (int i = 0; i < nb_encheres; i++) {
  cin >> prix;
  cin >> st;
  if(prix >= prix_reserve && prix > mini) {
    mini = prix;
    nom = st;
    std::transform(nom.begin(), nom.end(),nom.begin(), ::toupper);

  }

}

if(mini  > prix_reserve) cout << nom <<endl;
else cout << "KO" << endl;


// cout << "test ok ok"<< endl;

  return 0;
}
