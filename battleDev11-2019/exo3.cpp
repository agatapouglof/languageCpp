#include <bits/stdc++.h>

using namespace std;

#define enld endl
#define endl '\n'
#define pb push_back
#define debug(x) cout<<#x<<" -> "<<x<<'\n'

struct requete {
    int debut;
    int fin;
    int cable;
};
int main(){
    int N,M,deb,fin,maxi,t;
    vector<requete> requetes;
    deque<int> cables;
    bool fail = false;
    cin >> N >> M;
    for (int i = 1; i <= N; i++){
        cables.pb(i);
    }
    for (int i = 0; i < M; i++){
        requete rq;
        cin >> deb >> fin;
        if(i==0) maxi = fin;
        else maxi = max(maxi,fin); 
         rq.debut = deb;
         rq.fin = fin;
         rq.cable = 0;
         requetes.pb(rq);
    }
    int i=0;
    while(i<maxi){
        for (int j = 0; j < M; j++){
            if(requetes[j].fin == i){
                cables.pb(requetes[j].cable);
            }
        }
        for (int k = 0; k < M; k++){
            if(requetes[k].debut == i){
                if(cables.size() == 0){
                    cout << "pas possible" << endl;
                    fail = true;

                    break;
                }else{
                    t = cables.front();
                    cables.pop_front();
                    requetes[k].cable = t;
                }
            }
        }
        
        i++;
    }
    if(!fail){
        for (int i = 0; i < M; i++){
            cout << requetes[i].cable << " ";
        }
        
    }
    
    
    
    return 0;
}