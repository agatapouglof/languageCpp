/*22-03-2018
* add the number of days in past months
* and find the corresponding day in days array by doing modulo 7
*
**/

# include <iostream>
# include <string>
# include <map>
using namespace std;

int main (){
  int d,m,res=3;// 3 is the last day of the previous year
  int monthDays [12] = {31,28,31,30,31,30,31,31,30,31,30,31} ;
  map<int,string> days ;
  days[1] = "Monday";
  days[2] = "Tuesday";
  days[3] = "Wednesday";
  days[4] = "Thursday";
  days[5] = "Friday";
  days[6] = "Saturday";
  days[7] = "Sunday";


  cin >> d;
  cin >> m;
  for(int i=0; i<m-1; i++){
    res += monthDays[i];
  }
  res += d;
  res = res % 7;
  if(res == 0) res = 7;
  cout << days[res] <<endl;
  return 0;
}
