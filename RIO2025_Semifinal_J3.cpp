#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
#include<bits/extc++.h>
using namespace __gnu_pbds;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>rbt;
*/
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ss int(s.size())
#define sso sort(s.begin(),s.end())
#define vso sort(v.begin(),v.end())
#define pb push_back
#define fi first
#define se second
int main(){
    fast;
    ll n,m;
    cin>>n>>m;
    char a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<ll>pref1,pref2;
    ll cem=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cem+=a[i][j]-'0';
        }
        pref1.pb(cem);
        cem=0;
    }
    cem=0;
    //for(auto x:pref1) cout<<x<<" ";
    //cout<<endl;
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cem+=a[j][i]-'0';
        }
        pref2.pb(cem);
        cem=0;
    }
    //for(auto x:pref2) cout<<x<<" ";
    ll say=0;
    for(ll i=0;i<pref1.size();i++){
        for(ll j=0;j<pref2.size();j++){
            if(pref1[i]+pref2[j]==n+m or (pref1[i]+pref2[j]==n+m-2 and a[i][j]=='0') or (pref1[i]+pref2[j]==2 and a[i][j]=='1') or pref1[i]+pref2[j]==0) say++;
        }
    }
    cout<<say;
}
