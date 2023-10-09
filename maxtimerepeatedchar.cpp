#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="leetcode";
    vector<int>v(26,0);
    for(int i=0;i<s.length();i++){
        int k= (int)s[i]-97;
        v[k]++;
        }
        int max=INT_MIN;
        for(int i=0;i<26;i++){
                if(max<v[i])max=v[i];
        }
         for(int i=0;i<26;i++){
            
                if(max==v[i])
                {int n = i+97;
                char ch=(char)n;
                cout <<ch << " "<<max << endl;}
        }

}