#include<iostream>
// #include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="cba";
    string t="abca";
    int n=s.length();
    int p=t.length();
    int flag=0;
    if(n==p){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i]){
           flag=1;
        }
    }
    if(flag==1)
    {
        cout << "no";
    }
    else 
    {
        cout << "yes";
    }
    }
    else cout <<"no";
}