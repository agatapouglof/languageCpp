#include<iostream>
#include <numeric>
#include<vector>

using namespace std;


int main(){
int C,N,grade,compt;
float avg,res;
vector<float> grades;
cin >> C ;
for(int i=0; i<C ; i++){
    cin >> N;
    grades.clear();
    for(int j=0; j<N; j++){
       cin >> grade ;
       grades.push_back(grade);

    }
    avg = accumulate( grades.begin(), grades.end(), 0.0) /grades.size();
    compt = 0;
    for(int a=0; a<N ;a++ ){
      if(grades[a] > avg){
        compt++;
      }
    }
    res = (float)compt/N ;
    res *= 100.0;

    cout.precision(3);
    cout << fixed <<  res  << "%"<< endl;
}
return 0;
}
