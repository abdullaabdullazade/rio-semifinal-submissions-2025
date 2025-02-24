#include <bits/stdc++.h>
using namespace std;
#define Study ios_base::sync_with_stdio(); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define fori(x,y,z) for(ll x=y;x<=z;x++)
#define all(x) x.begin(),x.end()
#define pb push_back
#define ins insert
#define ull unsigned long long
/*
You got this :D
Anyways think of it as DIV3 A-D
A-B->30 DEQ
C-D->1 saat fikirlesme
1 saat 30 deq yazma
canin sag olsun codeforce contestidir isunfks
*/
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<char>>v(n+10,vector<char>(m+10));
    vector<ll>rows(n+m+10,0),column(m+n+10,0);
    fori(i,1,n){
        fori(j,1,m){
        cin>>v[i][j];
        if(v[i][j]=='1'){
            rows[i]++;
            column[j]++;
        }
        }
    }
    ll ans=0;
    fori(i,1,n){
        fori(j,1,m){
            ll row=rows[i];
            ll col=column[j];
            if(v[i][j]=='1'){
                row--;
                col--;
            }
            if((row==m-1 && col==n-1) || (row==0 && col==0)){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Study;
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}
