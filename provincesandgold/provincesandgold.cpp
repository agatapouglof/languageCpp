

#include "bits/stdc++.h"
using namespace std;

void victory_cards(int v){
	if(v >= 8) cout << "Province or " ;
	else if(v >= 5) cout << "Duchy or ";
	else if(v >= 2) cout << "Estate or "; 
} 

void treasure_cards(int v){
	if(v >= 6) cout << "Gold" << endl;
	else if(v >= 3) cout << "Silver" << endl;
	else cout << "Copper" << endl;
}
int main(){
	int a,b,c;
    	cin >> a >> b >>c;
	
	victory_cards(a*3 + b*2 + c);
	treasure_cards(a*3 + b*2 +c);	
   	 return 0;
}
