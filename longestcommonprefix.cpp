#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string>v={"flower","flow","flight"};
    for(int i=0;i<v.size();i++){
        cout << v[i]<<endl ;   }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i]<<endl ;   }

    
}