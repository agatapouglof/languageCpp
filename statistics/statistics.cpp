#include<iostream>
using namespace std;
int main(){
  int n,cas=1;
  int max=0,min=0,range;
  int num;
  while(cin >> n){
    for(int i=0;i<n;i++){
      cin >> num;
      if(i == 0){max = num; min=num; range = max - min;}
      if(num  < min) min = num;
      if(num > max) max = num;
    }
    range = max - min;
    cout << "case " << cas << ": " << min << " "<< max << " "<< range <<endl;
    cas++;
  }
  return 0;
}
