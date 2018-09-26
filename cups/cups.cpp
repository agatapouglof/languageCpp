#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>

using namespace std;

int main(){
  int N;
  string a,b;
  double entry;
  string str;
  vector<double> radius;
  map<double , string> res;
  cin >> N;
  for(int i=0; i<N ; i++){

    cin >> a >> b;

    bool a_has_only_digits = (a.find_first_not_of( "0123456789" ) == string::npos); // find if the string is not a digit

    if(a_has_only_digits){
      double a_int = stod(a);
      entry = a_int / 2.0;
      str = b;
    }else{
      entry  = stod(b);
      str = a;
    }

    radius.push_back(entry);
    res[entry] = str;

}
sort(radius.begin(),radius.end());

for(auto x: radius){
  cout << res[x]  << endl;
}

return 0;
}
