#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fori for(int i=0;i<n;i++)
#define forj for(int j=0;j<m;j++)
#define fort for(int g=0;g<t;g++)
#define pr pair(int,int)
#define sorta sort(a,a+n)
#define sortv sort(v.begin(),v.end())
#define sorts sort(s.begin(),s.end())
#define vb v.begin(),v.end()
#define sb s.begin(),s.end()
#define endl "\n"
#define cimbom ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
cimbom;
ll b,c,d,e,n,m,k,g,say=1000000001;
cin>>n>>m;
string s,s1,s2;
ll a[n][m];
fori{
	forj{
		cin>>a[i][j];
}}
ll t=m;
for(ll i=0;i<n-1;i++){
    fort{
for(ll j=0;j<m;j++){
say=min(say,abs(a[i][g]-a[i+1][j]));
}}}
cout<<say;
}
