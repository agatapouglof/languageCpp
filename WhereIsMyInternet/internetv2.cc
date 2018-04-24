#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<algorithm>
#include<map>

struct liaison {
    // les deux points qui forment la liaison
    // the two pointw of an edge
    int a;
    int b;
};
typedef liaison liaison;
using namespace std;

int main(){
    int taille,cases,a,b;
    set <int> connecteds;
    set <int> not_connecteds;
    map <int ,int> NotCon;
    vector <liaison> liens;
    bool test = true;
    connecteds.insert(1);
    cin >> taille >> cases ;
    for(int j=2; j<= taille; j++){
      not_connecteds.insert(j);
    }

    for(int i=0; i<cases; i++){
        cin  >> a >> b;
        liaison tp ;
        tp.a = a; tp.b = b;
        liens.push_back(tp);
    }
    int  q=0,w=0;

    while(test){
      test = false;
      for(int i=0; i< liens.size(); i++){
        if(!(connecteds.count(liens[i].a) && connecteds.count(liens[i].b))){
        if((connecteds.count(liens[i].a) || connecteds.count(liens[i].b))){
            connecteds.insert(liens[i].a);
            connecteds.insert(liens[i].b);
            not_connecteds.erase(liens[i].a);
            not_connecteds.erase(liens[i].b);
            test = true;
          }
        }
      }
    }

    if(not_connecteds.empty()){
      cout << "Connected" << endl;
    }else{
      for(auto x : not_connecteds){
        cout << x << endl;
      }
    }

    return 0;
}
