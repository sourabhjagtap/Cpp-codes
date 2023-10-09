#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="1241";
    sort(s.begin(),s.end());
    for (int i=s.length()-1;i>0;i--)
    {
        if(s[i] != s[i-1])
        {
            cout << s[i-1];
            break;
        }
    }

}
