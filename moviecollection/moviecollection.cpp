#include <bits/stdc++.h>

using namespace std;

void fast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
int main(){
    fast();
    // vector<int> base {1,2,3,4,5,6,7,8,9,10,11};
    vector<int> base {1,2,3,4,5,6,7,8,9,10,11};
    vector<int> casebase ;
    int  cases, tests, elements, movie;
    vector<int>::iterator it; 


    cin >> cases;
    while(cases-- > 0){
        cin >> elements >> tests;
        // base.clear();
        // create base object representing the stack of movies
        // maybe bad idea to reset it for each test case let's see ==> so that's it
        // change to save maxi base
        // clearly not enough
        // cout << base.size() << endl;
        if(elements > base.size()){
            cout << "short" << endl;
            cout << base.size() << endl;
            for(int i=base.size() + 1; i<= elements; i++){
                base.push_back(i);
            }
        }
        casebase = base;
        for(int i=0; i<tests; i++){
            cin >> movie;
            it = find(casebase.begin(), casebase.end(), movie);

            if (it != casebase.end()) { 
                cout << it - casebase.begin()  << " " ; // movie index also the number of movies above it
                casebase.erase(casebase.begin()+ (it - casebase.begin()));
                casebase.insert ( casebase.begin() , movie );
            } 
        }
        cout << "\n";

    }
    return 0;
}