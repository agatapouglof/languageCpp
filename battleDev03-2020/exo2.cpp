#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;

const ld  pi   = 4.0*atanl(1.0);
const int iinf = 1e9 + 10;
const ll  inf  = 1e18 + 10;
const int mod  = 1000000007;
const ld  prec = .000001;

#define enld endl
#define endl '\n'
#define pb push_back
#define debug(x) cout<<#x<<" -> "<<x<<'\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define uni(x) (x).erase(unique(all(x)), (x).end())
#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rep1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define umap unordered_map
#define uset unordered_set

int main(){
   int line;
   int nb;
   cin >> nb ;
   map<int, int> list;
   vector<int> sequence;
   for(int i=0; i< nb ; i++){
       cin >> line ;
       sequence.push_back(line);
   }
    int current_seq = 1;
    for(int i=0; i< nb-1 ; i++){
        if(sequence[i] == sequence[i+1] ){
            current_seq++;
        }

        if(list.find(sequence[i]) != list.end()){
            if(list.find(sequence[i])->second < current_seq){
                list[sequence[i]] = current_seq;
            }
           
       }else{
            list[sequence[i]] = 1;   
       }
       
       if(sequence[i] != sequence[i+1] ){
            current_seq = 1;
        }

   }

   
   int maxi = 0;
   int maxi_name = 0;
  for(auto itr = list.begin(); itr != list.end(); itr++){
      if(itr->second > maxi) {
          maxi = itr->second;
          maxi_name = itr->first;;
      }
  }

  cout << maxi << endl;
    return 0;
}