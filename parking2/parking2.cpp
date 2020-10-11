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
    int t;
    int n,x,sum=0,moy,res;
    cin >> t;
    vector<int> vect;
    rep(i,t){
        cin >> n;
        rep(j, n){
            cin >> x;
            vect.pb(x);
        }
        int min_value = *std::min_element(vect.begin(),vect.end());
        int max_value = *std::max_element(vect.begin(),vect.end());
        res = 2 * ( max_value - min_value );
        cout << res << endl;

        vect.clear();
    }   
    return 0;
}