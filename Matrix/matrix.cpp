/* calculate 2 x 2 matrix inverse
* a b
* c d
* A" = 1/(a*d-b*c) *
*    d -b
*   -c a
*/
#include <iostream>
using namespace std;


int main(){
  int a,b,c,d,det,cas=1;
  char rien ;
  while(cin >> a){
    cin >> b;
    cin >> c;
    cin >> d;

    // cin >> rien;
    // cpp not read space in the input

    det = 1 /(a*d-b*c);
    a  *= det;
    b  *= det;
    c  *= det;
    d  *= det;
    cout << "case " << cas <<":\n";

    cout << d << " " << -b <<"\n";
    cout << -c << " " << a <<"\n";

    cas++;
  }
  return 0;
}
