#include <bits/stdc++.h>
// pretty code using class in c++

// #include "bits/stdc++.h"

using namespace std;

int trace(vector<vector<int>> matrice);
int rowRep(vector<vector<int>> matrice);
int colRep(vector<vector<int>> matrice);
int main(){
  int testCases, tailleMatrice, temp, cases;
  
  
  
  cin >> testCases;

  cases = 0;
  while (cases < testCases){
    vector<vector<int>> matrice;
    cin >> tailleMatrice;
    for(int i=0; i<tailleMatrice; i++){
        vector<int> row;
        for(int j=0; j<tailleMatrice; j++){
                cin >> temp ;
                row.push_back(temp);
        }
        matrice.push_back(row);
    }
      cout << "Case #"<< cases + 1<<": ";
      cout << trace(matrice) << " " ;
      cout << rowRep(matrice) << " " ;
      cout << colRep(matrice) << endl;      
      cases++;
  }
//   cout << matrice.size() << endl;
//   cout << trace(matrice) << endl;
//   cout << rowRep(matrice) << endl;
//   cout << colRep(matrice) << endl;
  return 0;
}


// TRACE DE LA MATRICE ok
int trace(vector<vector<int>> matrice){
    int trace = 0;
    for (int i = 0; i < matrice.size(); i++)
    {
        trace += matrice[i][i];
    }
    return trace;
}

// ROW REPETION NUMBER 
int rowRep(vector<vector<int>> matrice){
    int repetition = 0;
    for (int i = 0; i < matrice.size(); i++)
    {
    set<int> rep (matrice[i].begin(), matrice[i].end());
        repetition += (rep.size() != matrice.size()) ? 1 : 0;
    }
    return repetition;
}
// ROW REPETION NUMBER 
int colRep(vector<vector<int>> matrice){
    int repetition = 0;
    for (int j = 0; j < matrice.size(); j++)
    {  
        set<int> rep ;
        for(int i =0; i< matrice.size(); i++){
        rep.insert(matrice[i][j]);
    }
        if(rep.size() != matrice.size()) repetition += 1;
    }
    return repetition;
}
