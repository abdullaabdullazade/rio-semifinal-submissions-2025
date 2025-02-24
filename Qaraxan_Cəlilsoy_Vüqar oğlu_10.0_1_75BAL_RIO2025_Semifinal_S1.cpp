// designed by Nrutas
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define endl '\n'
#define vct vector
#define fst first
#define snd second
#define pb push_back
#define all(v) v.begin(), v.end()
#define str string
#define fori for(int i=0; i<n; i++)
const int Max=INT_MAX;
const ll inf=LLONG_MAX;
const int Mod=9929;
void experiment()
{

}
void solve()
{
    int a,b;
    cin>>a>>b;
    str s;
    for(int i=a; i<=b; i++)
    {
        s=to_string(i);
        int left=0;
        int len=s.size()/2;
        int mid=s.size()/2+s.size()%2;
        str s1=s.substr(left,len);
        str s2=s.substr(mid,len);
        if(s1==s2)
            cout<<"Palindrome!\n";
        else
            cout<<s<<endl;
    }
}
int main()
{
    int t;
    //cin>>t;
    t=1;
    while(t--)
        solve();
}
