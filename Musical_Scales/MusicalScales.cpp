# include<iostream>
# include<string>
# include<map>
# include <bitset>
using namespace std;

int main(){
  string notes[12] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
  bitset <12> result (string("111111111111"));
  map <string,string> allScales;
  int n;
  string val,res="";
  int toAdd,scale[7] = {2,2,1,2,2,2,1};
  string scaled = "";
  bool test = true;
  for(int i=0; i<12; i++){
    // cout << notes[i] << endl;
    scaled = "";
    toAdd = i;
    for(int j=0; j<7; j++){
      toAdd += scale[j];
      if(toAdd > 11) toAdd -= 12;
      scaled += notes[toAdd] + ",";
    }
    // cout << scaled << endl;
    allScales[notes[i]] = scaled ;
  }
    cin >> n ;
    for(int a=0; a < n; a++){
      // cout <<  allScales[notes[1]] << endl;
      cin >> val;
      for(int j=0; j<12; j++ ){
        size_t found = allScales[notes[j]].find(val+",");
        if (found == string::npos){
          result[j] = 0;
        }
      }
    }
    test = false;
    for(int i=0;i< 12 ;i++){
      if(result[i] == 1){
        if(!test) cout << notes[i];
        else cout << " " << notes[i];
        test = true;
      }
    }
    if(!test) cout << "none";
  // cout << "" << endl;
  return 0;
}

// std::size_t found = str.find(str2);
// if (found!=std::string::npos)
