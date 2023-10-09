#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str="suyesh bhosadiche aahe";
    string temp;
    stringstream ss(str);
    while(ss>>temp){
        cout << temp<<endl;
    }
}