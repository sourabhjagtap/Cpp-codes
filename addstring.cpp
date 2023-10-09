#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="pw";
    string s=str;
    reverse(str.begin(),str.end());
    cout << s+str;
}
