#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fori for(int i=0;i<n;i++)
#define forj for(int j=0;j<m;j++)
#define pr pair(int,int)
#define sorta sort(a,a+n)
#define sortv sort(v.begin(),v.end())
#define sorts sort(s.begin(),s.end())
#define vb v.begin(),v.end()
#define sb s.begin(),s.end()
#define endl "\n"
#define cimbom ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
signed main(){
cimbom;
ll b,c,d,e,n,m,k,g,say=0,cem=0;
cin>>n>>m;
string s,s1,s2;
for(ll i=n;i<=m;i++){
    s=to_string(i);
    s1=s;
    reverse(sb);
    if(s==s1){\
        cout<<"Palindrome!"<<endl;
    }
    else{
        cout<<i<<endl;
    }}
}
