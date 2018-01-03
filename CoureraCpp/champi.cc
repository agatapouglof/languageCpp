#include<iostream>

using namespace std;
int main (){
  /*cout << "Pensez Ã  un champignon : amanite tue-mouches, pied bleu, girolle," << endl

         << "cÃ¨pe de Bordeaux, coprin chevelu ou agaric jaunissant." << endl << endl;

    cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
    cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";
    cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
    cout << "Est-ce que votre champignon vit en forÃªt (1 : oui, 0 : non) ? ";

    cout << "==> Le champignon auquel vous pensez est ";

    cout << "l'agaric jaunissant";
    cout << "l'amanite tue-mouches";
    cout << "le cÃ¨pe de Bordeaux";
    cout << "le coprin chevelu";
    cout << "la girolle";
    cout << "le pied bleu";*/
    int res;
    cout << "Pensez Ã  un champignon : amanite tue-mouches, pied bleu, girolle," << endl
           << "cÃ¨pe de Bordeaux, coprin chevelu ou agaric jaunissant." << endl << endl;

    cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? " << endl ;
    cin >> res ;
    if (res) {
        cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? "<< endl;
        cin >> res ;
        if (res) {
            cout << "Est-ce que votre champignon vit en forêt (1 : oui, 0 : non) ? " <<endl;
            cin >> res;
            if (res) {
              cout << "==> Le champignon auquel vous pensez est ";
              cout << "l'amanite tue-mouches";
            }else{
              cout << "==> Le champignon auquel vous pensez est ";
              cout << "l'agaric jaunissant";
            }
        }else{
              cout << "==> Le champignon auquel vous pensez est ";
              cout << "le coprin chevelu";
        }
    }else{ // case C2 == 0
        cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? "<<endl;
        cin >> res;
        if (res) {
            cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? "<<endl;
            cin >> res;
            if (res) {
                cout << "==> Le champignon auquel vous pensez est ";
                cout << "le pied bleu";
            }else{
              cout << "==> Le champignon auquel vous pensez est ";
              cout << "la girolle";
            }
        }else{
            cout << "==> Le champignon auquel vous pensez est ";
            cout << "le cèpe de Bordeaux" <<endl;
        }
    }
    return 0;
}
