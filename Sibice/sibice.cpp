#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int match,matchesNumber,width,height,i=0,max;
    cin >> matchesNumber;
    cin >> width;
    cin >> height;
    max = sqrt(pow(width,2)+pow(height,2));
    //cout << max << endl;
    for(i;i<matchesNumber;i++){
        cin >> match;
        if(match >  max){
            cout << "NE" << endl;
        }else{
            cout << "DA" <<endl;
        }   
    }
    return 0;
}
