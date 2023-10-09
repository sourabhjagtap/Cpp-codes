#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){
   string s;
   cout << "enter string \n";
   getline(cin,s);
   int n=s.size()+1;
   reverse(s.begin(),s.end());
    cout << s;
    
}