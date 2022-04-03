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
    vector<int> cyan;
    vector<int> magenta;
    vector<int> yellow;
    vector<int> black;
    int n,temp;
    int c,m,y,b;
    cin >> n;

    rep(i,n){
        rep(j, 3){
            cin >> c >> m >> y >>b;
            cyan.push_back(c);
            magenta.push_back(m);
            yellow.push_back(y);
            black.push_back(b);

        }
            int r1 = *min_element(cyan.begin(), cyan.end());
            int r2 = *min_element(magenta.begin(), magenta.end());
            int r3 = *min_element(yellow.begin(), yellow.end());
            int r4 = *min_element(black.begin(), black.end());
            cout << "Case #" << i+1 << ": ";
            if((r1+r2+r3+r4) < 1000000){
                cout << "IMPOSSIBLE" << endl;
            } 
            else{
                int base = 1000000;
                int res = (base > r1) ?  r1 : base;

                cout << res;
                cout << " ";
                base = (base > r1) ? base - r1 : 0;

                res = (base > r2) ?  r2 : base;
                cout << res;
                cout << " ";
                base = (base > r2) ? base - r2 : 0;

                
                res = (base > r3) ?  r3 : base;
                cout << res;
                cout << " ";
                base = (base > r3) ? base - r3 : 0;

                res = (base > r4) ?  r4 : base;
                cout << res;
                cout << endl;
                


            }
            cyan.clear();
            magenta.clear();
            yellow.clear();
            black.clear();
    }
    return 0;
}