#include<iostream>
#include<string>
using namespace std;

const int nb_parcelles = 10;
const int prix_100 = 30000;
const int quota = 10000;
struct Tsurface {
    int num_parc; // numero de parcelle
    int num_coop; // numero du cooperateur
    int num_com ; // numero insee de la commune 
    int nb_ha ;   // nombre d'hectare de la parcelle
    int qte_raisin; // quantite produite sur la parcelle exprime en kilogrammes
};
struct Tcommune {
    int num_com; // numero insee de la commune
    string nom_com; // nom de la commune 
    double classement ; // nombre decimal representant le classement du cru ex: 0.85 pour 85%

};
typedef Tsurface Tsurface;
typedef Tcommune Tcommune;

int main(){
    Tsurface tps;
    tps.num_parc = 1;
    tps.num_coop = 32;
    cout << "num parc  " << tps.num_parc << endl;
    cout << "num coop  "  << tps.num_coop << endl;
    return 0;
}
