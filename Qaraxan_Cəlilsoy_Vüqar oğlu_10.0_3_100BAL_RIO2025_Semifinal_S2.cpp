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
int bs(vct<int>v, int left, int right, int x)
{
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(x<v[mid])
            right=mid-1;
        else if(x>v[mid])
            left=mid+1;
        else
            return mid;
    }
    return -1;
}
bool neighbor(auto i, auto j)
{
    advance(i,1);
    if(i==j)
        return true;
    advance(i,-2);
    if(i==j)
        return true;
    return false;
}
void experiment()
{
    int n;
    cin>>n;
    set<int>s;
    int x;
    while(n--)
    {
        cin>>x;
        s.insert(x);
    }
    int y;
    cin>>x>>y;
    auto i=s.find(x),j=s.find(y);
    cout<<neighbor(i,j);
}
void solve()
{
    int n;
    cin>>n;
    vct<int> a(n);
    set<int>b;
    int mx=-1,mn=Max;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b.insert(a[i]);
    }
    int ans=1;
    for(int i=1; i<n; i++)
    {
        auto i1=b.find(a[i]),i2=b.find(a[i-1]);
        if(!neighbor(i1,i2))
            ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    //t=1;
    while(t--)
        solve();
}
