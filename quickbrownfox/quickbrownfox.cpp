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
    int n;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string text, missing="missing ";
    bool isPangram = true;


    cin >> n;
    // here a dummy getline to suppress reading of integer before
    getline(cin, text);
    rep(i,n){
        getline(cin, text);
         std::for_each(text.begin(), text.end(), [](char & c) {
            c = ::tolower(c);
        });
        rep(j,26){
            if(text.find(tolower(alphabet[j])) == string::npos){
                missing += tolower(alphabet[j]);
                isPangram = false;
            }
        }
    if(isPangram) cout << "pangram" << endl;
    else cout << missing << endl;
    isPangram = true;
    missing = "missing ";
    }

    return 0;
}