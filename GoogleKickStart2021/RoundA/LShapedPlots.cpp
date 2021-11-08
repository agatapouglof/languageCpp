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

int cases, cols, rows, temp;
vector<vector<int>> matrix;
int totalCount = 0;
void testline(int line, int start, int end);
bool checkExistingSideDown(int sideLength, int line, int point);
bool checkExistingSideUp(int sideLength, int line, int point);
int main(){

    cin >> cases;
    for (int a = 1; a <= cases; a++){
        cin >> rows >> cols;
        totalCount =0;
        matrix.clear();
        for (int i = 0; i < rows; i++)
        {   vector<int> column; 
            for (int j = 0; j < cols; j++)
            {
                cin >> temp;
                column.push_back(temp);
            }
            matrix.push_back(column);
            
        }
            for (int i = 0; i < rows; i++)
        {   
            for (int j = 0; j < cols-1; j++)
            {   
                if(matrix[i][j] == 1){
                    if(matrix[i][j] == matrix[i][j+1] ){
                        testline(i,j,j+1);
                        break;
                    }
                }
            }
            
        }
        cout << "Case #" << a <<": ";
        cout << totalCount <<endl;
        
    }
    
    


    return 0;
}

void testline(int line, int start, int end){
    int diff = end - start + 1;
    // cout << matrix[line][start] <<endl;
    if(checkExistingSideUp(diff * 2, line, start)) totalCount++;
    if(checkExistingSideDown(diff * 2, line, start)) totalCount++;
    if(checkExistingSideUp(diff * 2, line, end)) totalCount++;
    if(checkExistingSideDown(diff * 2, line, end)) totalCount++;
    if(diff > 2 && (diff %2 ==0)){
        if(checkExistingSideUp(diff / 2, line, start)) totalCount++;
        if(checkExistingSideDown(diff / 2, line, start)) totalCount++;
        if(checkExistingSideUp(diff / 2, line, end)) totalCount++;
        if(checkExistingSideDown(diff / 2, line, end)) totalCount++;
    }
        if(end != cols-1){
            if(matrix[line][end+1] == 1){
                testline(line, start, end+1);
            }else{
                // end+1 is 0
                // if(diff > 2){
                    if(start != end){
                        testline(line, start+1, end);
                    }
                // }
            }

    }
}


bool checkExistingSideUp(int sideLength, int line, int point){
    // check up
    if(line >= sideLength-1){
        for (int i = 0; i < sideLength; i++){
            if(matrix[line-i][point] == 0) return false;
        }
        return true;
    }
    return false;
}

bool checkExistingSideDown(int sideLength, int line, int point){
    // check down
    if(sideLength <= rows - line ){
        for (int i = 0; i < sideLength; i++){
            if(matrix[line+i][point] == 0) return false;
        }
        return true;
    }
    return false;
}