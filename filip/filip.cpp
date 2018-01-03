#include<iostream>
#include<sstream>
#include<string>
#include<stdlib.h>
using namespace std;

int reverse(int a){ //reverse a 3 digits number
    int i = 0,res=0,val;
    for(i;i<3;i++){
        val = a % 10 ;
        a /= 10;
        res += val;
        res*= 10;
    }
    res /= 10;
    return res;
}
int main (){
    int num1,num2;
    cin >> num1 >> num2;
    num1 = reverse(num1);
    num2 = reverse(num2);
    if(num1 > num2){
        cout << num1 << endl;
    }else{
        cout << num2 << endl;
    }
    //nt test = reverse(123);
    //cout << test << endl;
    return 0;
}
