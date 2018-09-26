#include<bits/stdc++.h>

using namespace std;

class Hash
{

    map <int, vector<string>> table;
public:
    Hash();  // Constructor
    // inserts a key into hash table
    bool insertItem(string x);
    // hash function to map values to key
    int hashFunction(string x) {
        return x.length() ;
    }
    void displayHash();
};

Hash::Hash(){
    // cout << "construct" << endl;
}

bool Hash::insertItem(string key){
    int index = hashFunction(key);

    for (auto elt : table) {
      if(elt.first < key.length()){
        for (auto x : elt.second){
          if (key.rfind(x, 0) == 0) {
            return false ;
          }
        }
      }
      if(elt.first > key.length()){
        for (auto x : elt.second){
          if (x.rfind(key, 0) == 0) {
            return false ;

          }
        }
      }
    }
    table[index].push_back(key);
    return true;
}

// function to display hash table
void Hash::displayHash() {
  for (auto elt : table) {
    cout << elt.first;
    for (auto x : elt.second)
      cout << " --> " << x;
    cout << endl;
  }
}

int main(){
  map <int, vector<string>> lst;
  int sz,cases;
  string tmp;

  cin >> cases ;
  for(int c=0; c < cases; c++){
    Hash has;
    bool res = true ;
    cin >> sz;
    for(int a=0; a<sz; a++){
      cin >> tmp;
      res = has.insertItem(tmp);
      if(!res) break;
    }
    if(res) cout << "YES" << endl;
    else cout << "NO" << endl;
}
  return 0;
}
