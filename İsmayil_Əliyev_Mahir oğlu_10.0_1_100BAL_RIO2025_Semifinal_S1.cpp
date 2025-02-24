
#include <bits/stdc++.h>
using namespace std;
long long f(long long i)
{
    string s=to_string(i);
    string s1=s;
    reverse(s1.begin(), s1.end());
    if(s1==s)
        return true;
    else
        return false;
}
int main()
{
    string n, m;
    cin>>n>>m;
    long long a=stoll(n);
    long long b=stoll(m);
    for(long long i=a; i<=b; i++)
    {
        if(f(i)==true)
        {
            cout<<"Palindrome!"<<endl;
        }
        else
            cout<<i<<endl;
    }
}
