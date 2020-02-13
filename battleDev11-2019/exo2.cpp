/*******
 * Read input from cin
 * Use cout << ... to output your result to STDOUT.
 * Use cerr << ... to output debugging information to STDERR
 * ***/
#include <iostream>
#include <limits>
#include <vector>
#include <sstream>
#include <bits/stdc++.h>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
   std::string line;
   vector<int> planches;
   int t,mini,res=0;
   
   for(int i=0;i<4;i++){
       cin >>  t;
       if(i==0){
           mini = t;
       }else{
           mini = min(t,mini);
       }
       planches.push_back(t);
   }
   
  for(int i=0;i<4;i++){
    if(planches[i] > mini){
        res += planches[i] - mini;
    }
   }

    cout << res << endl;
	/* Vous pouvez aussi effectuer votre traitement une fois que vous avez lu toutes les données.*/
}