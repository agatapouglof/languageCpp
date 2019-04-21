#include<bits/stdc++.h>

using namespace std;

int main(){

	int random;

	srand(time(NULL));
	for(int i = 0; i<150; i++){
		for(int j = 0; j<51; j++){
			random = rand() % 2;
			//if(random == 0) random = -1;
		       	cout << random ;	
       			if(j!= 50)cout  << " "  ;	
		}
		
	  cout << "\n";
	}	
	

	return 0;
}
