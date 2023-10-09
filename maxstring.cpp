#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string>v={"0123","0023","456","00182","940","2910"};
    int mx=0;
    for(int i=0;i<v.size();i++){
        mx=max(mx,stoi(v[i]));
    }
    for(int i=0;i<v.size();i++){
        if(stoi(v[i])==mx)
        {
            cout << i+1 ;
            break;
        }
    }
}