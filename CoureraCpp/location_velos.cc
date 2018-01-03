#include <iostream>
using namespace std;

int main()
{
  cout << "Donnez l'heure de début de la location (un entier) : ";
  int debut;
  cin >> debut;

  cout << "Donnez l'heure de fin de la location (un entier) : ";
  int fin;
  cin >> fin;

  /*****************************************************
   * Compléter le code à partir d'ici
   *****************************************************/
    int prix1,prix2,tp1=0,tp2=0,montant;
    int b1,b2 ;// les borne de calcul
    if(debut < 0 || debut > 24 || fin < 0 || fin > 24){
    cout << "Les heures doivent être comprises entre 0 et 24 !" << endl;
    }else{
        if(debut > fin){
            cout << "Bizarre, le début de la location est après la fin ..." << endl;
        }else{
            if(debut == fin){
                cout << "Bizarre, vous n'avez pas loué votre vélo bien longtemps !" << endl;
            }else{
               
                // le temps passer dans l'intervale 0 - 7
                b1 =0 ; 
                b2 = 7;
                if(debut > b1) b1 = debut;
                if (fin <b2  ) b2 = fin;
                tp1 = (b2>b1) ? b2-b1 : 0;
                //le temps dans passer dans  l'intervalle 7  - 17
                b1 =7 ; 
                b2 = 17;
                if(debut > b1) b1 = debut;
                if (fin <b2  ) b2 = fin;
                tp2 = (b2>b1) ? b2-b1 : 0;   
                // temps passer dans ;'intervalle 17 - 24
                b1 =17 ; 
                b2 = 24;
                if(debut > b1) b1 = debut;
                if (fin <b2  ) b2 = fin;
                tp1 = (b2>b1) ? (tp1 + b2-b1) : tp1;
                // montant final
                montant = tp1 + tp2 * 2;
                //cout<< tp1 << endl;
                cout << "Vous avez loué votre vélo pendant" << endl;
                if(tp1 > 0){    
                    cout << tp1;
                    cout << " heure(s) au tarif horaire de " << "1"
                    << " franc(s)" << endl;
                }
                if(tp2 > 0){
                    cout << tp2;
                    cout << " heure(s) au tarif horaire de " << "2"
                    << " franc(s)" << endl;
                }
                cout << "Le montant total à payer est de " << montant
                << " franc(s)." << endl;
            }
        }
    }

  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

  return 0;
}
