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
    int n,m;
    cin>>n>>m;
    int a[m],b[m];
    for(int i=0; i<m; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+m);
    sort(b,b+m);
    int ans=Max;
    int i=0,j=0;
    while(i<m and j<m)
    {
        ans=min(ans,abs(a[i]-b[j]));
        if(a[i]>b[j])
            j++;
        else
            i++;
    }
    cout<<ans;
}
int main()
{
    int t;
    //cin>>t;
    t=1;
    while(t--)
        solve();
}
