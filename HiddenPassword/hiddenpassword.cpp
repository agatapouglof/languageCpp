#include<iostream>
#include<string>

using namespace std;

int main(){
string password,message,ts1,ts2;
int i=0,j=0,l=0;
bool test = false;
int pos;
cin >> password;
cin >> message;
while(!test && l<message.length()){
   pos = password.find(message[l]);
   if(pos>=0){
      if((password[i] == message[l])){
         password = password.substr(1); 
         if(password == ""){
            test = true;
         }
      }else{
         if(pos > 0){
            break;
         }
      }
   }
   l++;
}
if(test){
   cout << "PASS" << endl;
}else{
   cout << "FAIL" <<endl;
}
return 0;
}