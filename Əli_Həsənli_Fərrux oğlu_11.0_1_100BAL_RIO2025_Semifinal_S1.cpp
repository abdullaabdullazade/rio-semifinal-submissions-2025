#include<bits/stdc++.h>
using namespace std;
bool check(long long x)
{
    string s=to_string(x);
    for(int i=0;i<s.size();i++)
        if(s[i]!=s[s.size()-1-i])
            return 0;
    return 1;
}
void solve(long long l,long long r)
{
    for(long long i=l;i<=r;i++)
        if(check(i))
            cout<<"Palindrome!"<<endl;
        else cout<<i<<endl;
}
int main()
{
    long long l,r;
    cin>>l>>r;
    solve(l,r);
    return 0;
}
