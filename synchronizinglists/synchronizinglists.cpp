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
/*
*   first code using macro template helpers
*   28/03/2020
*/
int main(){
    int n,val;
    cin >> n;
    while(n != 0 ){
        vector<int> list, list1, list2;
        rep(i, n){
            cin >> val;
            list.pb(val);
            list1.pb(val);
        }
        rep(i, n){
            cin >> val;
            list2.pb(val);
        }
        sort(all(list1));
        sort(all(list2));
        map<int, int> mapper;
        rep(i,n){
            mapper[list1[i]] = list2[i];
        }
        rep(i,n){
            cout << mapper[list[i]] << endl;
        }
        cin >> n;
        if(n != 0) cout << '\n';
    }
    return 0;
}