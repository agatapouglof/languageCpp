// done : 18/04/2020
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

queue<int> walk, trip, busTimes;
int main(){
    int s,t,n, tmp;
    cin >> s >> t >> n;
    rep(i, n+1){
        cin >> tmp;
        walk.push(tmp);
    }
    rep(i, n){
        cin >> tmp;
        trip.push(tmp);
    }
    rep(i, n){
        cin >> tmp;
        busTimes.push(tmp);
    }

    while(s < t && !walk.empty()){
        // step 1:: walk
        s += walk.front();
        walk.pop();

        // step 2:: wait for bus
        int busFrequency = busTimes.front();
        busTimes.pop();
        while(s % busFrequency != 0) s++;

        // step 3:: take the bus
        s += trip.front();
        trip.pop();

        // step 4:: walk to next bus stop or arrival (school) 
        s += walk.front();
        walk.pop();
    }

    if(s > t) cout << "no" << endl;
    else cout << "yes" << endl;


    
    return 0;
}