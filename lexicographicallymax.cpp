#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str="Please try ";
    vector<string>v;
    string temp;
    stringstream ss(str);
    while(ss>>temp){
        v.push_back(temp);
    }
    string mxstr = v[0];
    for(int i=0;i<v.size();i++){
        mxstr=max(mxstr,v[i]);
    }
    cout << mxstr;
}