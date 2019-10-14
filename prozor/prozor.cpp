#include "bits/stdc++.h"

using namespace std;

int main(){

    int r,s,k;
    char elt;
    int ra,rb, count=0;
    int x,y;
    bool a,b ; // booleans to check border position for redraw result grid
    /*
        a(y,x)   b
        d   c
    */

    cin >> r >> s >> k;
    char tab[r][s];
    //  read input image as multidimentionnal array
    for(int i=0; i<r ; i++){
        for(int j=0; j<s ; j++){
            cin >> tab[i][j] ;
        }

    }

    x = 0;
    y = 0;
    int maxi = 0;
        while((y+k) <= r){
            // cout << "test" << endl;
            while((x+k) <= s){
                count =0;
                for(int i=y+1; i<(y+k-1); i++){
                    for(int j=x+1; j<(x+k-1); j++){

                        if(tab[i][j] == '*') {
                            count++;
                        }
                    }
                }
                if(count > maxi){
                    maxi = count;
                    ra=y;
                    rb=x;
                }
                x++;
            }
            x=0;

            y++; // process starting from next line

    }

    cout << maxi << endl;

    // add elements + | - to result array
    for(int i=ra; i<(ra+k); i++){
        for(int j=rb; j<(rb+k); j++){
             a =  (i == ra || i == (ra+k-1)) ;
             b = (j == rb || j == (rb+k-1)) ;

             if(a && b ) {
                 tab[i][j] = '+';
            }else if(a && !b){
                tab[i][j] = '-';
            } else if(!a && b){
                tab[i][j] = '|';
            }    
        }


    }
    for(int i=0; i<r; i++){
        for(int j=0; j<s; j++){
            cout << tab[i][j] ;
        }
        cout << endl;
    }


    return 0;
}