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
    ll n;
    cin>>n;
    vector<ll>a,b;
    fori(i,1,n){
        ll x;
        cin>>x;
        a.pb(x);
    }
    fori(j,1,n){
        ll x;
        cin>>x;
        b.pb(x);
    }
    sort(all(a)); sort(all(b));
    ll ans=1;
    vector<ll>v(n+10,0);
    fori(i,0,n-1){
        auto it=upper_bound(all(b),a[i]);
        it--;
        ll dis=distance(b.begin(),it);
        dis++;
        //cout<<dis<<' '<<*it<<' '<<a[i]<<endl;
        if(dis<=i){
            ans=0;
            break;
        }
        else{
            ans*=dis-i;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Study;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
