#include<iostream>

/*program goal
 *
 * take actual time in input 24h format 45 min early
 *
 * */
using namespace std;

int main(){
    int hour,min,temp;
    cin >> hour >> min ;
    temp  = hour * 60 + min;
    temp -= 45;
    temp = (temp<0) ? temp+1440 : temp;
    hour = temp / 60;
    min  = temp % 60;
    cout << hour << " " << min <<endl;
    return 0;
}
