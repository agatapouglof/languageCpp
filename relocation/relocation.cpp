#include"bits/stdc++.h"

using namespace std;

// lack of performance in the solution time execution

int main(){
    int n, queries, elt, a, b, c;
    vector<int> companies;

    cin >> n >> queries;
    for(int i=0; i<n; i++){
        cin >> elt;
        companies.push_back(elt);
    }
    for(int i=0; i<queries; i++){
        cin >> a >> b >> c;
        if(a == 1){
            companies[b-1] = c;
        }else{
            cout << abs(companies[b-1] - companies[c-1]) << endl;
        }
    }
    return 0;
}