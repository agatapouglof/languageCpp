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
string BuildSeparator(int r, int c){
    string separator = "+";
    rep(i, c){
        separator += "-+";
    }
    return separator;
}

string BuildLine(int r, int c){
    string line = "|";
    rep(i, c){
        line += ".|";
    }
    return line;
}

int main(){
    int r,c,n;
    cin >> n;
    rep(i,n){
        cin >> r >> c ;
        cout << "Case #"<< i+1 <<":" << endl;
         string sep1 = BuildSeparator(r,c);
         sep1[0] = '.';
         sep1[1] = '.';
         cout << sep1 << endl;
        rep(j, r){
            string line = BuildLine(r,c);
            if(j == 0) {
                line[0] = '.';
                line[1] = '.';
            }
            cout << line << endl;
            cout << BuildSeparator(r,c) << endl;

        }
    }
    return 0;
}