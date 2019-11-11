#include "bits/stdc++.h"

using namespace std;

int main(){
    int n,h,v, hmax, vmax;
    std::cin >> n >> h >> v;
    hmax = max(h, n-h);
    vmax = max(v, n-v);
    cout << hmax * vmax * 4 << endl;
    return 0;

}
