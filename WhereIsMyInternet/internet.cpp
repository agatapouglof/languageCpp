#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

struct liaison {
    // les deux points qui forment la liaison
    int a;
    int b;
};
typedef liaison liaison;
using namespace std;

int main(){
    int taille,cases,a,b;
    vector <int> connecteds;
    map <int ,int>NotCon;
    vector <liaison> liens;
    connecteds.push_back(1);
    cin >> taille >> cases ;
    for(int m=2;m<=taille;m++){
        NotCon[m] = m;
    }
    //NotCon[3] = 10;
    //NotCon.erase(3);
    for(int i=0;i<cases;i++){
        cin  >> a >> b;
        liaison tp ;
        tp.a = a; tp.b = b;
        liens.push_back(tp);
    }
    int  q=0,w=0;
    while(q<connecteds.size()){
        w=0;
        while(w<liens.size()){
                if(liens[w].a == connecteds[q]){
                  if(find(connecteds.begin(),connecteds.end(),liens[w].b) == connecteds.end()){
                    connecteds.push_back(liens[w].b);
                    NotCon.erase(liens[w].b);
                  }
                    liens.erase(liens.begin()+w);//a revoir
                }else{
                    if(liens[w].b == connecteds[q]){
                      if(find(connecteds.begin(),connecteds.end(),liens[w].a) == connecteds.end()){
                        connecteds.push_back(liens[w].a);
                        NotCon.erase(liens[w].a);
                      }
                        liens.erase(liens.begin()+w);
                    }else{
                        w++;
                    }
                }
                //w++;
        }
        //e = connecteds.size();
        q++;
    }
    if(taille <= connecteds.size()){
         cout << "Connected" << endl;

    }else{
        map<int ,int>::iterator it;
        for(it = NotCon.begin(); it!=NotCon.end();it++){
            cout << it->first << endl;
        }
    }
    return 0;
}
