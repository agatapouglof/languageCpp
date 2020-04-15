#include "bits/stdc++.h"

using namespace std;

/* 15/04/2019 
* pseudo solution after some struggle 
* maybe one day find a better solution 
* I think this one is use useless compexity
*/

#define pb push_back
#define debug(x) cout<<#x<<" -> "<<x<<'\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define uni(x) (x).erase(unique(all(x)), (x).end())
#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)

int main(){
    string alph = "abcdefghijklmnopqrstuvwxyz";
    char input;
    int n,m;
    string endText,crypted,res;
    cin >> n >> m;
    cin >> endText;
    cin >> crypted;
    int  k=0;
    for(int i=crypted.length()-1;  i>= n;  i--){
        int pos = alph.find(crypted[i]) - alph.find(endText[endText.length() -1 - k ]);
        
        if(pos < 0) pos += 26;
        if(pos > 25) pos -= 25;
        endText = alph[pos] + endText ;
        k++;
    }

    cout << endText << endl;

    return 0;
}


