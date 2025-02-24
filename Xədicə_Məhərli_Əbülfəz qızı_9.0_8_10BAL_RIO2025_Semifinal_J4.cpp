#include <bits/stdc++.h>
using namespace std;
#define Study ios_base::sync_with_stdio(); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define fori(x,y,z) for(ll x=y;x<=z;x++)
#define all(x) x.begin(),x.end()
#define pb push_back
#define ins insert
#define ull unsigned long long
#define ss second
/*
You got this :D
Anyways think of it as DIV3 A-D
lmao 2 saat var D ucun
*/
const ll mod=1e9+7;
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n+10,0);
    fori(i,1,n){
        cin>>v[i];
    }
    if(v[1]<v[2] && v[1]<v[3] && v[2]>v[3]){
        cout<<"No\n";
    }
    else if(v[2]<v[1] && v[2]<v[3] && v[3]>v[1]){
        cout<<"No\n";
    }
    else if(v[3]<v[1] && v[3]<v[2] && v[1]>v[2]){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
    }
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
