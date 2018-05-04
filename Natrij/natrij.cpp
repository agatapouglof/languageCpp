#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//  input hh:mm:ss
// return the time in seconds
int get_time(){
  int h,m,s;
  scanf ("%d:%d:%d",&h,&m,&s);
  return s+(m*60)+(h*3600);
}
//  convert seconds input and print formated time
void output_time(int secs){
  int h,m,s;
  h = secs / (3600);
  secs %= (3600);
  m = secs / 60;
  secs %= 60;
  s = secs ;
  cout << setfill('0') << setw(2) << h << ":";
  cout << setfill('0') << setw(2) << m << ":";
  cout << setfill('0') << setw(2) << s;
}
int main(){
  int tms;
  int h2,h1;
  h1 = get_time();
  h2 = get_time();
  if(h2 < h1) {
    h2 += 86400;
  }
  tms = h2 - h1;
  //  bomb must not explode at the current time
  if(h1 == h2){
    cout << "24:00:00";
  }else{
    output_time(tms);
  }

  return 0;
}
