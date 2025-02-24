#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r;
    string s;
    cin>>l>>r;
    for(long long i=l; i<=r; i++){
        s+=i;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i] == 8 || s[i] == 9 || s[i] == 11){
            cout<<"Palindrome!"<<endl;
        }
        else if(s[i] != 8 || s[i] != 9 || s[i] != 11){
            cout<<i+l<<endl;
        }
    }
}
