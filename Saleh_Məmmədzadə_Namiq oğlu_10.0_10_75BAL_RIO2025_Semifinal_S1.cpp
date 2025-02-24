#include <bits/stdc++.h>
using namespace std;

int main()
{
int l ,r;
cin>>l>>r;
for(int i=l ;i<=r;i++){
        string s =to_string(i);
        int say=0;
        for(int i=0;i<s.size()/2; i++) {
            if(s[i]==s[s.size()-i-1])
                say++;
        }
        if(say==s.size()/2)
            cout<<"Palindrome!"<<endl;
        else
            cout<<i<<endl;}}
