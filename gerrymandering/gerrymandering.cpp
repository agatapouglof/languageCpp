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

class District {
    public:
        int A;
        int B;
};

int main(){
    int P,D;
    map<int, District> mapper;
    cin >> P >> D;
    int i,a,b,j=0;
    double total=0.0,wa=0.0,wb=0.0;
    while( j<P){
        cin >> i >> a >> b;
        if(mapper.find(i) == mapper.end()){
            District dist;
            dist.A = a;
            dist.B = b;
            mapper[i] = dist;
        }
        else{
            mapper[i].A = mapper[i].A + a;
            mapper[i].B = mapper[i].B + b;
        }
        j++;
    }

    for(int k=1; k<=D; k++){
        District current = mapper[k];
        total += (current.A + current.B);

        if(current.A > current.B){
            wa += current.A -( (current.A + current.B) / 2 + 1 );
            wb += current.B;
            cout << "A " << current.A - ( (current.A + current.B) / 2 + 1 ) << ' ' << current.B << endl ;
        }
        else{
            wa += current.A;
            wb += current.B - ( (current.A + current.B) / 2 + 1 );
            cout << "B " << current.A << ' '<< current.B - ( (current.A + current.B) / 2 + 1 )  << endl; 
        }
    }

        cout << abs(wa - wb) / total << endl;
    return 0;
}