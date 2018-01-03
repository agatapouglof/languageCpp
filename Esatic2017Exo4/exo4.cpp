#include<iostream>
using namespace  std;

int main(){
    int mois,tentative=1;
    cout << "saisir le numero du mois de 1 a 12" << endl;
    cin >> mois;
    if(mois<1 || mois >12){
        do{
                cout << "reprenez svp ohh" <<endl;
                cin >> mois;
                tentative+=1;
          
        }while(tentative != 3 && (mois<1 || mois >12));
    }
        if(tentative == 3 && (mois<1 || mois >12)){
            cout << "vous n'avez rien compris" << endl;
        }
    
    return 0;
}
