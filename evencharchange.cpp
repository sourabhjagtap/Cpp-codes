#include<iostream>
#include<string>
using namespace std;
int main(){
   string s="12";
   for(int i=0;s[i]!='\0';i++){
    cout << abs(48-(int)s[i]);
   }
// cout << abs(48-(int)'3');
   
    
}