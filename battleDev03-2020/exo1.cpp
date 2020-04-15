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
   std::string line;
   int nb;
   cin >> nb ;
   map<string, int> list;
   for(int i=0; i< nb ; i++){
       cin >> line ;
       if(list.find(line) != list.end()){
           list[line] = list[line] + 1;
           
       }else{
            list[line]  = 0;   
       }
   }
   
   int first = 0, second = 0;
   string first_name = list.begin()->first, second_name = "";
  for(auto itr = list.begin(); itr != list.end(); itr++){
      if(itr->second > first) {
          second = first;
          first = itr->second;
          second_name = first_name;
          first_name = itr->first;
      }
  }
  
  cout << first_name << " " << second_name <<endl;
    return 0;
}