#include<bits/stdc++.h>
// supidly divide the array in two and merge
using namespace std;

int main(){
  int lg,end;
  string name;
  vector<string> names;
  vector<string> v1;
  vector<string> v2;
  int set = 1;
   while(true){
     cin >> lg;
     if(lg == 0 ) break;
     for(int i=0; i<lg; i++){
       cin >> name ;
       names.push_back(name);
     }
      (lg % 2 == 0 ) ? end = lg : end = lg-1;
     for(int i=0; i<end; i+=2){
       v1.push_back(names[i]);
       v2.push_back(names[i+1]);
     }
     if(lg % 2 !=0 ) v1.push_back(names[lg-1]);
     reverse(v2.begin(),v2.end());
     v1.insert( v1.end(), v2.begin(), v2.end() );
     cout << "SET " << set << endl;
     for(int i=0; i<lg; i++){
       cout << v1[i] << endl ;
     }

     names.clear();
     v1.clear();
     v2.clear();
     set++;
   }
  return 0;
}
