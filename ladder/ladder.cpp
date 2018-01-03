#include<iostream>
#include<cmath>
using namespace std;
const double pi = acos(-1);
int main(){
    double number ;
    int wallheight,angle; 
    cin >> wallheight; 
    cin >> angle;
    number = wallheight / sin(pi * angle / 180)  ;
    cout << ceil(number) <<endl;
    return 0;
}
